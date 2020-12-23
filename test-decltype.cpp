
#include<iostream>
 
using namespace std;
 
void add(int a)
{
	cout << a << endl;
}
 
void add1(int a)
{
	cout << a << endl;
}
 
int main()
{
	//vs2013 中好像不需要这样。
	decltype(add) add1 ;		//生成一个函数名，要求你构造函数，类型与add一致，名称是add1
	//std::cout << decltype(add) << std::endl;

	add1(1);	
	cout <<"add1:"<< typeid(add1).name() << endl;
 
	decltype(add) *add2 = add;		//生成一个函数指针，引用函数数，直接引用
	add2(2);
	cout <<"add2:"<< typeid(add2).name() << endl;
 
	void(*p) (int a) = add2;	//标准的函数引用
	p(3);
	cout <<"p:"<<typeid(p).name() << endl;
 
	decltype(add) &add4 = add;	//生成一个函数引用，引用函数，直接引用
	add4(4);
	cout <<"add4:"<<typeid(add4).name() << endl;
	decltype(10) data = 10;  //数据类型，构造一个。
 
	cout << typeid(data).name() << endl;
 
	cin.get();

	return 0;

}
