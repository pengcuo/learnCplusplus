#include <iostream>
#include <vector>




class A {
public :
    std::vector<int> va;

    std::vector<int> & get() {
        return va;
    }
};

class B {
public :
    std::vector<int> vb;
};



int main() {
    A a;
    a.va.resize(100);


    for(int p = 0; p < 20; ++p) {
        a.va[p] = p;
    }

    B b;
    b.vb = a.get();


    a.va.resize(20);
    for(int p = 0; p < 20; ++p) {
        a.va[p] = 100 - p;
    }


    std::cout << a.va.size() << std::endl;
    std::cout << b.vb.size() << std::endl;

    for(int p = 0; p < 20; ++p) {
        std::cout << a.va[p] << " " << b.vb[p] << std::endl;
    }

    return 0;
}
