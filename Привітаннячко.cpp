#include <iostream>  
#include <string>    

int main() {
    std::string name;  

    std::cout << "Введіть ваше ім'я: ";  
    std::getline(std::cin, name);  

    std::cout << "Як себе почуваєш, " << name << "?" << std::endl;  

    return 0;  
}
