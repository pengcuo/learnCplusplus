#include <iostream>


class A
{
public:
       class B{int o;};
    int a;
    int b;

};

class C
{

};

int main()
{
       std::cout<<sizeof(A)<< std::endl;//1
       std::cout<<sizeof(C)<< std::endl;//
       return 0;
}
