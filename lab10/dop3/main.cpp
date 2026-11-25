#include <iostream>
#include <thread>
#include <chrono>


struct Frame {
    int a[5];
    int i;
};

int main() {
    Frame f;
    // Выход за границу одномерного массива: a[5] не существует.
    // В структуре i лежит сразу после массива, поэтому a[5] попадает
    // ровно в счётчик i. Запись a[5] = 0 обнуляет i -> цикл не кончается.
    for (f.i = 0; f.i <= 5; f.i++) {
        f.a[f.i] = 0;
        std::cout << f.i << ' ' << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(120));
    }
    std::cout << "done" << std::endl;
}
