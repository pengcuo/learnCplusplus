#include <iostream>
#include <memory>

class A {
public:
    A() = default;
    int a;
    double b;
    double b0;
    float c;
};




int main() {

    std::shared_ptr<A> a = std::make_shared<A>();


    A aa;
    A* aptr = new A();
    std::cout << "Object A size : " << sizeof(aa) << std::endl;
    std::cout << "Shared ptr size :" << sizeof(a) << std::endl;
    std::cout << "ptr size :" << sizeof(aptr) << std::endl;


    return 0;

}
