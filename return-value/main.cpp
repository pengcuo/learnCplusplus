#include <iostream>
#include <vector>


class A {
public:
    A() {
        std::cout << "A constrctor." << std::endl;
    }


    A(const A & a) {
        std::cout << "Copy value Constructor." << std::endl;
    }

    ~A() {
        std::cout << "delete " << std::endl;
    }


/*
    A operator=(A a) {
        std::cout << "=" << std::endl;
        return a;
    }
    */

};


A getObject() {
    A a;

    std::cout << __LINE__ << std::endl;
    return a;
}


int main() {

    A b =  getObject();


    std::cout << "int main." << std::endl;


    return 0;
}
