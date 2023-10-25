#include<iostrem>
using namespace std;
int main()
{
	int k,count,num=5;
	for(k=2,k<<=num,k++)
	{
		if(num%2)
		{
			count=count+1;
		}else if(count==1)
		{
			count<<"No is prime";
		}else
		{
			count<<"No is composite";
		}
	}
	getch();
}