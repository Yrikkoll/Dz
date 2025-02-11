#include <iostream>  

int main() {
    double A, B, C; 


    std::cout << "Введи дані для обчислення (A B C): ";
    std::cin >> A >> B >> C;


    double surfaceArea = 2 * (A * B + B * C + A * C);
    double volume = A * B * C;

   
    std::cout << "Площа поверхні: " << surfaceArea << std::endl;
    std::cout << "Об'єм: " << volume << std::endl;

    return 0;  
}