#include <string>
#include <iostream>

void showList() {}

template<typename T>
void showList(const T& value) {
    std::cout << value << std::endl;
}

template<typename T, typename ... Args>
void showList(const T& value, const Args& ... args) {
    std::cout << value << ", ";
    showList(args...);
}


int main() {
    int n = 14;
    double x = 2.71828;
    std::string mr = "xxxx";

    showList(n, x);

    showList(x * x, '!', mr);

    return 0;
}
