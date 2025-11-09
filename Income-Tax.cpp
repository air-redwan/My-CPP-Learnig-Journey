#include <iostream>
int main () {

    int annualIncome , monthlyIncome , Tax , DA , TA , PF ;

    Tax = annualIncome * (0.15);     
    TA = monthlyIncome * (0.1) ;
    DA = monthlyIncome * (0.1) ;
    PF = monthlyIncome * (0.05);
    monthlyIncome = annualIncome / 12;


    std::cout << "\nEnter Your Annual Income : ";
    std::cin >> annualIncome;

    std::cout << "\nYour Annual Income Is : "<< annualIncome << std::endl;
    std::cout << "Monthly Income : "<< monthlyIncome << std::endl;

    std::cout << "\nCalculation Rrport :";

    std::cout << "\nYour Annual Income Tax Is : " << Tax << std::endl;
    std::cout << "\nTA : " << TA << std::endl;
    std::cout << "\nDA : " << DA << std::endl;
    std::cout << "\nPF : " << PF << std::endl;
    
    return 0;
}