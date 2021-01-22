#include <map>
#include <iostream>
#include <string>


int main() {

    std::map<std::string, std::string> stringMap;


    std::pair<std::string, std::string> p("a", "b");
    //stringMap.insert("nocannobb", "test");

    stringMap.insert(p);


    stringMap["c"] =  "d";

    std::string a = "a";
    auto r = stringMap.find(a);


    std::cout << r->second << std::endl;

    std::shared_ptr<std::string> testShared = std::make_shared<std::string>("xxxx");

    std::cout << testShared.get() << std::endl;
    std::cout << *testShared << std::endl;


    return 0;
}
