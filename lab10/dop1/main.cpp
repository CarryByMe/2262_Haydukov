#include <iostream>


int main() {
    int x[10][10];

    std::cout << "x[0][0] = " << reinterpret_cast<size_t>(&x[0][0]) << std::endl;
    std::cout << "x[0][1] = " << reinterpret_cast<size_t>(&x[0][1]) << std::endl;
    std::cout << "x[0][9] = " << reinterpret_cast<size_t>(&x[0][9]) << std::endl;
    std::cout << "x[1][0] = " << reinterpret_cast<size_t>(&x[1][0]) << std::endl;
    std::cout << "x[9][9] = " << reinterpret_cast<size_t>(&x[9][9]) << std::endl;
    std::cout << "&x[0][9] + 1 == &x[1][0] : " << (&x[0][9] + 1 == &x[1][0]) << std::endl;
    std::cout << "sizeof(x) = " << sizeof(x) << " bytes" << std::endl;
}
