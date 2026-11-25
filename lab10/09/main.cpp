#include <iostream>


int main() {
    int a[10];
    std::cout << &a[8] - &a[3] << std::endl;

    double d[10];
    std::cout << &d[8] - &d[3] << std::endl;

    char c[10];
    std::cout << &c[8] - &c[3] << std::endl;
}
