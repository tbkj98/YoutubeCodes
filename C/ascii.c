#include <stdio.h>

int main() {

    // variables to store the character and ascii code
    char charVariable;
    int asciiCode;

    // printing statement to let user know
    printf("Enter a character = ");

    // taking input 
    scanf("%c", &charVariable);

    // calculating ascii code pf character
    asciiCode = (int) charVariable; // right side will calculate the ascii code

    // printing calculated ascii code on screen
    printf("ASCII code of %c is %d", charVariable, asciiCode);
    
    return 0;
}

