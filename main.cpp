#include <iostream>
#include <math.h>

unsigned long long fastPow(int x, int y) {
    long exponent = (long) floor(y * log2(x));
    double extraTerm = (y * log2(x)) - exponent;
    unsigned long long baseValue = (unsigned long) 2 << (exponent - 1);
    double multiplier = pow(2, extraTerm);
    long double answerBeforeRounding = baseValue * multiplier;
    return (unsigned long) round(answerBeforeRounding);
}


int main() {
    std::cout << fastPow(2, 63) << std::endl;
    return 0;
}