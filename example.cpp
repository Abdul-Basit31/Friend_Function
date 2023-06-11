#include<iostream>
#include<cmath>
using namespace std;

class B;
class A
{
private:
	int a;
public:
	friend void fun(A,B);
};

class B
{
private:
	int b;                                     
public:
	friend void fun(A,B);
};
void fun(A o1, B o2)
{
	cout<<"sum of :  "<<o1.a+o2.b;
}

int main()
{
	A obj1;
	B obj2;
	fun(obj1,obj2);
}
