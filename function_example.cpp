#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";

}

int main()
{
    std::cout << "Starting main()\n";
    std::cout << "Calling doPrint()\n";
    doPrint();
    std::cout << "Ending main()\n";    
    return 0;
}

