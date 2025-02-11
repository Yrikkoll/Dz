#include <iostream>  
#include <iomanip>  

int main() {
    const double PI = 3.14;  
    double R;  

   
    std::cout << "Радіус кола введи сюди: ";
    std::cin >> R;

   
    double area = PI * R * R;      
    double circumference = 2 * PI * R;  

   
    std::cout << std::fixed << std::setprecision(2);
    std::cout << " Площа круга: " << area << std::endl;
    std::cout << "Довжина кола: " << circumference << std::endl;

    return 0;  
}