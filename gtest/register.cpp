#include <iostream>
#include <vector>
#include <set>

class Op;
class OpImpl;


std::vector<OpImpl*>*  getOps() {
    static std::once_flag once;
    static std::vector<OpImpl*>* layers = nullptr;

    std::cout << "getOps" << std::endl;
    std::call_once(once, [&]() {
        layers = new std::vector<OpImpl*>;
        std::cout << "getOps new" << std::endl; });
    return layers;
}

class Ops {
public :
    static void add(OpImpl* a) {
        getOps()->push_back(a);
        std::cout << "Ops : " << getOps()->size() << std::endl;
    }
};

class OpImpl {
public :
    OpImpl() {
        std::cout << "OpImpl Constructor" << std::endl;
    }
};

class OpFactory {
public:
   OpFactory() {
        std::cout << "Op constructor" << std::endl;
        OpImpl * op = new OpImpl;
        Ops::add(op);
   }
};

OpFactory test_op;


int main() {
    std::cout << "op count : " << getOps()->size() << std::endl;
    return 0;
}
