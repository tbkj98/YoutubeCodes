#include <iostream>
#include <algorithm>

int reverse_number(int n)
{
    // 1. Convert the given number to string
    std::string number_string = std::to_string(n);
    // 2. Reverse the string
    std::reverse(number_string.begin(), number_string.end());
    // 3. Convert back the reverse string to number
    return std::stoi(number_string);
}

int main(int argc, const char *argv[])
{
    int num = 0;
    std::cout << "Enter number : ";
    std::cin >> num;
    std::cout << "Reverse of " << num << " = " << reverse_number(num);
    return 0;
}
