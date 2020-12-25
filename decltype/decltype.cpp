#include <iostream>

auto pengcuoAdd(int x, int y) -> int {
    return x + y;
}

int main() {
    int c = pengcuoAdd(1, 2);
    std::cout << c << std::endl;

    return 0;
}
