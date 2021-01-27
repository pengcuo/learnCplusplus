#include <string>
#include <iostream>


class Element {
public:
    Element(std::string name, int a) {
        mName = name;
        mVal = a;
    }


    Element& operator +(Element& tmp) {
        std::cout << this->mName << std::endl;
        std::cout << tmp.mName << std::endl;
        mVal += tmp.mVal;

        return *this;
    }

    std::string mName;
    int mVal;
};


int main () {
    Element a("a", 1);
    Element b("b", 2);


    auto c = a + b;


    std::cout << "c : " << c.mName << " " << c.mVal << std::endl;


}
