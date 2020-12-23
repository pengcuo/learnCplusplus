#include <iostream>

namespace name1 {
    enum LOSS{
        ONE,
        TWO
    };
}

namespace name2 {
    enum LOSS{
        ONE,
        TWO
    };
}

int main() {
    int one = name1::LOSS::ONE;
    std::cout << one << std::endl;

    int one_again = (name2::LOSS) (name1::LOSS::TWO);
    std::cout << one_again << std::endl;
}
