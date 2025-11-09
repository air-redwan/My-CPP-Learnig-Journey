#include <iostream>
#include <string>
int main () 
{

    int t;
    std::cin >> t;

    while (t--) 
    {
        std::string a;
        std::cin >> a;

        std::string b = "";

        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] == 'p') b += 'q';
            else if (a[i] == 'q') b += 'p';
            else b += 'w';
    }

        std::cout << b << std::endl;

    }

    return 0;
}