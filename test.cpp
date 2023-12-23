#include <iostream>

int main() {
    double dividend = 4.3;
    double divisor = ;

    double quotient = dividend / divisor;
    double remainder = dividend - (divisor * static_cast<int>(quotient));

    std::cout << "Phần dư của " << dividend << " chia cho " << divisor << " là " << remainder << std::endl;

    return 0;
}
