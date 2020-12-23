#include <iostream>
#include <vector>

class A {

public :
    A() {
        buffer.resize(10);
        for(int i = 0; i < 10; ++i) {
            buffer[i] = i;
        }
    }

    int& operator[] (int i) {
        return buffer[i];
    }
    float operator() () {
        return 8.f;

    }

private:
    std::vector<int> buffer;

};

int main() {
    A a;
    int res = a[3];
    std::cout << res << std::endl;

    float r = a();
    std::cout << r << std::endl;


    return 0;
}
