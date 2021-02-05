#include <iostream>

class A {
public:
    A() = default;
    A(const A& a) {
        std::cout << "Copy Constructor." << std::endl;
    }

    A operator=(const A& a) {
        std::cout << "Assign Oprator." << std::endl;
        A tmp;
        return tmp;
    }
};
int main() {
    A a;
    A b = a;
}
