#include <iostream>

int main() {

    // variables to store the character and ascii code
    char charVariable;
    int asciiCode;

    // printing statement to let user know
    std::cout << "Enter a character = ";

    // taking input
    std::cin >> charVariable;

    // calculating and assigning the ascii code of character
    asciiCode = (int) charVariable; // right side will calculate the ascii code

    // printing ascii code on screen
    std::cout << "ASCII code of " << charVariable << " is " << asciiCode;

    return 0;
}