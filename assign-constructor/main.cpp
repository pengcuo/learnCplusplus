#include <iostream>

class Test {

public :
    Test(): val(0) {}

    Test(int v): val(v) {}

    Test operator +(Test & a) {
        Test tmp;
        tmp.val = a.val + val;

        std::cout << "operator + " << std::endl;
        return tmp;
    }

    Test operator =(Test& a ) {
        std::cout << "operator =" << std::endl;

        Test tmp;

        tmp.val = a.val;

        return tmp;
    }

    Test(Test&& a) {
        std::cout << "Copy constructor" << std::endl;
        val = a.val;
    }


    void operator =(Test&& a ) {
        std::cout << "operator = right" << std::endl;

        val = a.val;

        Test tmp;

    }

    ~Test() {}



    int val;
};


int main() {
    Test a(1);
    Test b(2);


    //Test c = a + b;

    Test c;
    c = a + b;


/*
    Test d = std::move(c);


    Test e ;
    e = d;
    */


    std::cout << "result : " << c.val << std::endl;


    return 0;
}
