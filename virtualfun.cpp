#include<iostream>
using namespace std;
class A
{
	public:
		virtual void show()
		{
			cout<<"base class called";
		}
};
class B:public A
{
	void display()
	{
		cout<<"derived class called";
	}
};
int main()
{
	A*P;
	B a;
	P=&a;
	B display();
}