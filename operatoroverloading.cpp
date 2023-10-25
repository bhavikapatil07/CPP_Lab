#include<iostream>
using namespace std;
class count
{
	int value;
	public:
		count():value(5)
		{
			
		}
		void operator++()
		{
			++value;
		}
		void display()
		{
			cout<<value;
		}
};
int main()
{
	count o1;
	++o1;
	o1.display();
	return 0;
}