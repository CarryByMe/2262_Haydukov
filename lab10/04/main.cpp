#include <iostream>


void show(unsigned &a, unsigned &b, unsigned &c, unsigned *p, unsigned *q) {
    std::cout << "a=" << a << " b=" << b << " c=" << c
              << "  p->" << (p == &a ? "a" : p == &b ? "b" : "c")
              << " q->" << (q == &a ? "a" : q == &b ? "b" : "c")
              << "  *p=" << *p << " *q=" << *q << std::endl;
}

int main() {
    unsigned a = 8, b = 3, c = 17;
    unsigned *p = &a;
    unsigned *q = &b;
    show(a, b, c, p, q);
    *p += *q + c; show(a, b, c, p, q);
    c = *q;       show(a, b, c, p, q);
    p = &c;       show(a, b, c, p, q);
    c += a;       show(a, b, c, p, q);
    *p += 10;     show(a, b, c, p, q);
    *q = *p;      show(a, b, c, p, q);
    q = p;        show(a, b, c, p, q);
    *q += 10;     show(a, b, c, p, q);
}
