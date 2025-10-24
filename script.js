const totalChapters = 76;
const deadline = new Date("2026-11-01");
const adminUID = "Asraful Islam Redwan";
const adminPass = "air0099study1r";

// Default admin account
if (!localStorage.getItem(adminUID)) {
  localStorage.setItem(adminUID, JSON.stringify({ password: adminPass, completed: 0, history: {}, avatar: null }));
}

// ===== Login / Signup =====
function toggleForm(type) {
  document.getElementById("signupForm").style.display = (type === 'signup') ? "block" : "none";
  document.getElementById("loginForm").style.display = (type === 'login') ? "block" : "none";
}

function signup() {
  const user = document.getElementById("signupUser").value.trim();
  const pass = document.getElementById("signupPass").value.trim();
  if (!user || !pass) return alert("Fill all fields!");
  if (localStorage.getItem(user)) return alert("Username exists!");
  const avatarInput = document.getElementById("signupAvatar");
  if (avatarInput.files.length > 0) {
    const reader = new FileReader();
    reader.onload = e => {
      localStorage.setItem(user, JSON.stringify({ password: pass, completed: 0, history: {}, avatar: e.target.result }));
      alert("Account created! Please login.");
      toggleForm('login');
    }
    reader.readAsDataURL(avatarInput.files[0]);
  } else {
    localStorage.setItem(user, JSON.stringify({ password: pass, completed: 0, history: {}, avatar: null }));
    alert("Account created! Please login.");
    toggleForm('login');
  }
}

function login() {
  const user = document.getElementById("loginUser").value.trim();
  const pass = document.getElementById("loginPass").value.trim();
  const stored = localStorage.getItem(user);
  if (!stored) return alert("User not found!");
  const data = JSON.parse(stored);
  if (data.password !== pass) return alert("Wrong password!");
  localStorage.setItem("activeUser", user);
  window.location.href = "dashboard.html";
}

// Logout
function logout() {
  localStorage.removeItem("activeUser");
  window.location.href = "index.html";
}

// ===== Dashboard =====
if (window.location.pathname.includes("dashboard.html")) {
  const activeUser = localStorage.getItem("activeUser");
  if (!activeUser) window.location.href = "index.html";

  const userData = JSON.parse(localStorage.getItem(activeUser));

  // Username & Avatar
  document.getElementById("username").innerText = activeUser;
  const avatarImg = document.getElementById("profileAvatar");
  avatarImg.src = userData.avatar || "default-avatar.png";

  avatarImg.addEventListener("click", () => {
    document.getElementById("avatarInput").click();
  });

  document.getElementById("avatarInput").addEventListener("change", function () {
    if (this.files && this.files[0]) {
      const reader = new FileReader();
      reader.onload = e => {
        avatarImg.src = e.target.result;
        userData.avatar = e.target.result;
        localStorage.setItem(activeUser, JSON.stringify(userData));
      }
      reader.readAsDataURL(this.files[0]);
    }
  });

  // Update dashboard info
  function updateDashboard() {
    const completed = userData.completed || 0;
    const remaining = totalChapters - completed;
    const percentDone = Math.round((completed / totalChapters) * 100);

    // Progress bar
    const progressGreen = document.getElementById("progressGreen");
    const progressRed = document.getElementById("progressRed");
    progressGreen.style.width = percentDone + "%";
    progressRed.style.width = (100 - percentDone) + "%";

    document.getElementById("progressText").innerText = `Completed: ${completed} chapters (${percentDone}%), Remaining: ${remaining} chapters`;

    // Time left
    const now = new Date();
    let diff = deadline - now;
    if (diff < 0) diff = 0;
    const months = Math.floor(diff / (1000 * 60 * 60 * 24 * 30));
    const weeks = Math.floor(diff / (1000 * 60 * 60 * 24 * 7));
    const days = Math.floor(diff / (1000 * 60 * 60 * 24));
    const hours = Math.floor(diff / (1000 * 60 * 60));
    document.getElementById("timeLeft").innerText = `Time left: ${months} months | ${weeks} weeks | ${days} days | ${hours} hours`;

    // Weekly / Monthly plan
    const chaptersLeft = totalChapters - completed;
    const weeksLeft = weeks || 1;
    const monthsLeft = months || 1;
    document.getElementById("weeklyPlan").innerText = `You need to complete ~${Math.ceil(chaptersLeft / weeksLeft)} chapters per week to finish on time.`;
    document.getElementById("monthlyPlan").innerText = `You need to complete ~${Math.ceil(chaptersLeft / monthsLeft)} chapters per month to finish on time.`;

    // Monthly history chart
    const ctx = document.getElementById('historyChart').getContext('2d');
    const monthsArr = Object.keys(userData.history).sort();
    const dataArr = monthsArr.map(m => userData.history[m]);
    if (window.progressChart) window.progressChart.destroy();
    window.progressChart = new Chart(ctx, {
      type: 'bar',
      data: {
        labels: monthsArr,
        datasets: [{
          label: 'Chapters Completed',
          data: dataArr,
          backgroundColor: '#3b82f6'
        }]
      },
      options: {
        responsive: true,
        plugins: { legend: { display: false } },
        scales: { y: { beginAtZero: true, max: 10 } } // adjust max if needed
      }
    });
  }

  updateDashboard();
}

// ===== Progress Page =====
if (window.location.pathname.includes("progress.html")) {
  const activeUser = localStorage.getItem("activeUser");
  if (!activeUser) window.location.href = "index.html";

  const userData = JSON.parse(localStorage.getItem(activeUser));

  document.getElementById("addProgressForm").addEventListener("submit", function (e) {
    e.preventDefault();
    const date = document.getElementById("date").value;
    const chapters = parseInt(document.getElementById("monthChapters").value);
    if (!date || isNaN(chapters) || chapters < 0) return alert("Enter valid data!");

    const monthKey = date.slice(0, 7); // YYYY-MM
    if (!userData.history[monthKey]) userData.history[monthKey] = 0;

    const prevMonthChapters = userData.history[monthKey];
    userData.completed = userData.completed - prevMonthChapters + chapters;
    if (userData.completed > totalChapters) userData.completed = totalChapters;

    userData.history[monthKey] = chapters;
    localStorage.setItem(activeUser, JSON.stringify(userData));
    document.getElementById("message").innerText = `Progress updated successfully! Total completed chapters: ${userData.completed}`;
    this.reset();
  });
}
