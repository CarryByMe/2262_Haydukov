#include <iostream>


int main() {
    int x[10][10];
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            x[i][j] = i * 10 + j;

    std::cout << "x[1][0]      = " << x[1][0] << std::endl;
    std::cout << "x[0][10] OOB = " << x[0][10] << "  (== x[1][0])" << std::endl;
    std::cout << "x[0][15] OOB = " << x[0][15] << "  (== x[1][5] = " << x[1][5] << ")" << std::endl;
    std::cout << "x[2][-1] OOB = " << x[2][-1] << "  (== x[1][9] = " << x[1][9] << ")" << std::endl;
    std::cout << "x[0][99] OOB = " << x[0][99] << "  (== x[9][9] = " << x[9][9] << ")" << std::endl;
}
