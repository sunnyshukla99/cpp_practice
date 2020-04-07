#include <iostream>

int doubleNumber(int x)
{
    return 2 * x;
}

int main()
{
    std::cout << "Enter an integer: ";
    
    int num;
    std::cin >> num;
    
    std::cout << "The integer doubled is: " << doubleNumber(num) << std::endl;
    
    return 0;

}

