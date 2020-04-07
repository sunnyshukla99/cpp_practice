#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int num;
    std::cin >> num;
    
    std::cout << "Double that integer is: " << num * 2 << std::endl;
    std::cout << "Enter another integer: ";
    int second_num;
    std::cin >> second_num;
    
    std::cout << "Square of that integer is: " << second_num * second_num << std::endl;

    return 0;
    
}
