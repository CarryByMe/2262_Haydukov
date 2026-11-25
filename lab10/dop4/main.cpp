#include <iostream>
#include <vector>


int main() {
    int *a = new int[5]{1, 2, 3, 4, 5};
    std::cout << "new[] addr = " << a << "  a[0] = " << a[0] << std::endl;
    delete[] a;

    std::cout << "vector growth (data relocates when capacity grows):" << std::endl;
    std::vector<int> v;
    for (int i = 0; i < 5; i++) {
        v.push_back(i);
        std::cout << "size=" << v.size() << " cap=" << v.capacity()
                  << " data=" << v.data() << std::endl;
    }

    int *p = new int(42);
    delete p;
    // *p = 7;    // UB: use-after-free (dangling pointer)
    // delete p;  // UB: double free
    std::cout << "after delete p is dangling; dereference / double-delete = UB" << std::endl;
}
