#include <iostream>
#include <vector>

class A {
public :
    A() {
        std::cout << "A" << std::endl;
    };
    ~A() {
        std::cout << "~A" << std::endl;
    }

};

int main() {
    std::vector<A> a(10);

    return 0;
}
