#include <iostream>
#include <vector>

int main() {

    for(int i = 0; i < 10; ++i) {
        std::vector<int> test;
        test.push_back(1);
        std::cout << i << " : " << test.size() << std::endl;
    }
    return 0;
}
