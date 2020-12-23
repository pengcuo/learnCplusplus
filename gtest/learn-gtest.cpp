#include <iostream>



class Base {
public:
    Base() {
        std::cout << "This is Base Class" << std::endl;
    }

};

template<class T>
class Creator {
public :
    static Base* Create() {return new T;}
};

class Test : public Base{
public:
    Test() {
        std::cout << "This is Test Class" << std::endl;
    }
};

class Test2 : public Base{
public:
    Test2() {
        std::cout << "This is Test2 Class" << std::endl;
    }
};



int main() {

    std::cout << "test." << std::endl;

    //Base* test = Creator<Test>::Create();
    //Base* test2 = Creator<Test2>::Create();
    


    return 0;
}
