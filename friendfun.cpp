#include<iostream>
using namespace std;
class A
{
	int a=20;
	public:
		friend void add(A);
};
class B
{
	int b=20;
	public:
		friend void add(B);
};
void add(A r1,B r2)
{
	int sum= r1 a+r2 b;
	cout<<sum;
}
main()
{
	A o1;
	B o2;
	add(o1,o2);
}