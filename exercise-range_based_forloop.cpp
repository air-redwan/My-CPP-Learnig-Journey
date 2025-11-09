#include <iostream>
#include <vector>
int main () {
    std::vector <int> num = {3,6,15,17,18,21,55,100, 200, 300};
    int count = 0;
    for(auto n : num) {

        if(n%3 == 0 || n%5 == 0)
        {
            count++;
        }
    }
    std::cout << count << std::endl;
return 0;
}