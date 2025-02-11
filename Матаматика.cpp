#include <iostream>  

int main() {
    int a, b;

    
    std::cout << "Введи два любих числа: ";
    std::cin >> a >> b;

    
    std::cout << "Сумма: " << (a + b) << std::endl;
    std::cout << "Різниця: " << (a - b) << std::endl;
    std::cout << "Множення: " << (a * b) << std::endl;

    return 0;  
}