#include <iostream>
#include <algorithm>
#define gcd(x, y) std::__gcd(x, y)
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a = 12, b = 18;
    std::cout << "LCM is: " << lcm(a, b) << std::endl;
    return 0;
}