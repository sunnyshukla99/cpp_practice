#include <iostream>

int main()
{
    std::cout << "Enter an integer: " << std::endl;
    int first_number;
    std::cin >> first_number;
    
    std::cout << "Enter second integer: " << std::endl;
    int second_number;
    std::cin >> second_number;
    
    std::cout << first_number << " + " << second_number << " is " << first_number + second_number << std::endl;
    
    std::cout << first_number << " - " << second_number << " is " << first_number - second_number << std::endl;
    
    return 0;
}

