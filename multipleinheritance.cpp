#include<iostream>
using namespace std;
class sum
{
	public:
		int l,b;
		public:
			int read()
			{
				cout<<"enter the value of l&b:"<<endl;
				cin>>l>>b;
				cout<<l;
				cout<<b;
			}
};
class perimeter:public sum
{
	public:
		int findper()
		{
			int per=2*(l+b);
			cout<<per<<endl;
		}
};
class area:public perimeter
{
   public:
   int findarea()
   {
   	   int area=l*b;
   	   cout<<area<<endl;
	   }	
};
main()
{
	area obj;
	obj.read();
	obj.findper();
	obj.findarea();
}