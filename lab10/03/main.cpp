#include <iostream>


int main() {
    int a = 6, b = 3;
    int *p = &a;
    int &r = b;
    *p = *p * b;
    int c = a & b;
    std::cout << *p << ' ' << r << ' ' << c << std::endl;
}
