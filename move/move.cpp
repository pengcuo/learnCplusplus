#include <iostream>
#include <chrono>
#include <vector>


using namespace std;
void test_move() {
    for(int j = 13; j < 20; ++j) {
        const int64_t times = 10;
        std::string str = "tt";
        for (int i = 0; i <= j; ++i) {
            str += str;
        }
        cout << "test string size(kb):" << str.size()/1024 << endl;
        cout << "move or copy times:" << times << endl;
        std::vector<std::string> v_copy;
        std::vector<std::string> v_move;

        // 将使用 push_back(const T&), 即产生拷贝行为
        auto begin = std::chrono::steady_clock::now();
        for (int i = 0; i < times; ++i)
            v_copy.push_back(str);
        auto time = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - begin).count();
        cout << "copy time(us):" << time << endl;

        auto begin2 = std::chrono::steady_clock::now();
        for (int i = 0; i < times; ++i)
            v_move.push_back(std::move(str));
        time = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - begin2).count();
        cout << "move time(us):" << time << endl;
    }
}

int main() {
    test_move();

    return 0;
}
