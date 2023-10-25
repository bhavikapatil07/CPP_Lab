#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		int read()
		{
			cout<<"enter the value of a=";
			cin>>a;
		}
};
class B:public A
{
	public:
		show()
		{
			cout<<"hiii";
		}
};
int main()
{
	B obj;
	obj.read();
	obj.show();
	
}