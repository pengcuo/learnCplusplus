#include <iostream>

#define STR(s) #s
#define REGISTER_CPU_OP_CREATOR(name, opType)     \
    STR(___##name##__##opType##__)


int main() {

    std::cout << REGISTER_CPU_OP_CREATOR(xxxx, yyyy) << std::endl;

    return 0;
}
