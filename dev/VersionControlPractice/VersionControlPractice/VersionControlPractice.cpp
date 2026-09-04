#include <iostream>
#include "Crypt.h" // include the class 

int main()
{
    Crypt crypt; // create the obj
    crypt.DisplayMessage(); // display the message

    std::cin.get(); // pause for a keypress before closing
    return 0;
}