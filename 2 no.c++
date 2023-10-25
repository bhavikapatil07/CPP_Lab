#include<iostream>
using namespace std;
class student
{
	private:
	int rollno;
	char name[10];

	public:
		void read()
		{
			cout<<"\nEnter the roll no=";
			cin>>rollno;
			cout<<"\nEnter the name=";
			cin>>name;
		}
		void print()
		{
			cout<<"\nrollno="<<rollno;
			cout<<"\nname="<<name;
		}
    };
    int main()
    {
    	student A;
    	A.read();
    	A.print();
	}
