#include<iostream>
using namespace std;
class Encap
{
	private:
		int no;
		string name;
		public:
			int info(int a,string b)
			{
				no=a;
				name=b;
				cout<<"no is:"<<no<<endl;
				cout<<"name is :"<<name<<endl;
			}
};
int main()
{
	Encap E;
	E.info(3,"mayu");
}