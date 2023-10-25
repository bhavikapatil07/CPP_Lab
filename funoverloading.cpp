#include<iostream>
using namespace std;
class addition
{
	public:
		int sum(int a,int b)
		{
			int sum=a+b;
			cout<<"sum is:"<<sum<<endl;
		}
		int sum(int a,int b,int c)
		{
			int sum=a+b+c;
			cout<<"sum is:"<<sum<<endl;
		}
};
int main()
{
addition obj;
obj.sum(10,20);
obj.sum(2,5,7);
return 0;
}