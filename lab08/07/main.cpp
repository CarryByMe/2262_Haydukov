#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> s(n);
    for (int &si : s) {
        std::cin >> si;
    }
    
    bool f = false;
    
    for (const int &i : s) {
        if (i < 0) {
            std::cout << i;
            f = true;
            break;
        }
    }
    
    if (!f) {
        std::cout << "Не найдено";
    }
    
  
}