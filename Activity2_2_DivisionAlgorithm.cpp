#include <iostream>
#include <cstdlib> // For abs()

int main() {
    int a, b;
    std::cout << "Enter two integers (a and b): ";
    std::cin >> a >> b;

    if (b == 0) {
        std::cerr << "Error: Division by zero" << std::endl;
        return -1;
    }

    int quotient = 0;
    int remainder = abs(a);

    while (remainder >= b) {
        remainder -= b;
        quotient++;
    }

    if (a < 0) {
        if (remainder > 0) {
            quotient = -quotient - 1;
            remainder = b - remainder;
        } else {
            quotient = -quotient;
        }
    }

    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0;
}
