#include <iostream>
#include <vector>
#include <set>

class Op;
class Creator;


std::vector<Creator*>*  getLayerArray() {
    static std::once_flag once;
    static std::vector<Creator*>* layers = nullptr;

    std::cout << "getLayerArray" << std::endl;
    std::call_once(once, [&]() {
        layers = new std::vector<Creator*>;
        std::cout << "new vector<Creator*>" << std::endl; });

    return layers;
}

class backend {
public :
    static void add(Creator* a) {
        getLayerArray()->push_back(a);
        std::cout << "Creators : " << getLayerArray()->size() << std::endl;
    }
};

class Creator {
public :
    Creator() {
        std::cout << "Creator Constructor" << std::endl;
    }
};

class RegisterCreator {
public:
   RegisterCreator() {
        std::cout << "RegisterCreator constructor" << std::endl;
        Creator * creator = new Creator;
        backend::add(creator);
   }
};

//RegisterCreator test_op;
static bool gRegistor = [] () {

    std::cout << "gRegistor." << std::endl;

    Creator * creator = new Creator;
    backend::add(creator);

    return true;
}();


int main() {
    std::cout << "op count : " << getLayerArray()->size() << std::endl;
    return 0;
}
