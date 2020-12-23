
#include <iostream>
#include <set>
#include <iterator>
using namespace std;
 
//自定义比较函数myComp，重载操作符 ()
struct myComp
{
	bool operator() (const int &a, const int &b)
	{
		return a > b;	//从大到小排序
		//return a < b;	//从小到大排序
	}
};
 
int main()
{
	set<int, myComp> s1;
	for(int i = 1; i < 6; i++)
		s1.insert(i*i);
	s1.insert(8);
	//ostream_iterator<int> output(cout, " ");
	set<int, myComp>::iterator it = s1.begin();
	for(; it != s1.end(); it++)
	{
		cout<<*it<<" ";
	}
 
	return 0;
}
