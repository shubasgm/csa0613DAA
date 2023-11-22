#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 < 0 || num2 < 0) {
        std::cout << "Illegal input: Please enter non-negative numbers." << std::endl;
    } else {
        int result = gcd(num1, num2);
        std::cout << "GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;
    }

    return 0;
}