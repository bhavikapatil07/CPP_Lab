#include<iostream>
using namespace std;
class add
{
	public:
		add()
		{
			cout<<"constructor involked"<<endl;
		}
		add(int a,int b)
		{
			cout<<"a is:"<<endl;
			cout<<"b is:"<<endl;
		}
		~add()
		{
			cout<<"destructor involked"<<endl;
		}
};
main()
{
	add a1,a2(10,20);
}