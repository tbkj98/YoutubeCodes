#include <iostream>
#include <string>

void print(std::string statement) {
    std::cout << statement << "\n";
}

void sum(int a, int b, void (*print_ptr)(std::string)) {
    int sum = a + b;
    std::string str = "Sum = " + std::to_string(sum);
    (*print_ptr)(str);
}

void multiply(int a, int b, void (*print_ptr)(std::string)) {
    int sum = a * b;
    std::string str = "Multiplication = " + std::to_string(sum);
    (*print_ptr)(str);
}

int main()
{
    sum(2, 7, print);
    multiply(25, 6, print);

    return 0;
}
