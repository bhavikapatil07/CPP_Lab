#include<iostream>
using namespace std;
int main()
{
	double num,deno,div;
	cout<<"enter the numerator:";
	cin>>num;
	cout<<"enter the denominator:";
	cin>>deno;
	try{
		if(deno==0)
		throw 0;
		div=num/deno;
		cout<<"/"<<deno<<"="<<div<<endl;
	}
	catch (int num_exception){
		cout<<"Error:cannot divide by"<<num_exception<<endl;
	}
	return 0;
}