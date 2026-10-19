#include <iostream>
#include "Crypt.h" // include the class 

int main()
{
    Crypt crypt; // create the obj
    crypt.DisplayMessage(); // display the message

    std::cin.get(); // pause for a keypress before closing

    std::cout << "1. Enter the crypt" << std::endl;
    std::cout << "2. Flee" << std::endl;
    return 0;
}