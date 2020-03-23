#include<iostream>
using namespace std;
int fact(int n,int value=1);
int main()
{
	int i;
	cout<<"enter the no"<<endl;
	cin>>i;
	int j=fact(i);
	cout<<"Factorial is "<<j<<endl;
	return 0;

}
int fact(int n,int value)
{
	if(n==0)
		return value;
	return fact(n-1,n*value);
}
