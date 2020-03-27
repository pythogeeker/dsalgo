#include<iostream>
using namespace std;
int main()
{
	short int x,y;
	cout<<"ENTER THE TWO NUMBERS"<<endl;
	cin>>x>>y;
	int a=x&y;
	int b=x|y;
	int c=~x;
	int d=x^y;	
	cout<<"bitwise and "<<a<<endl;
	cout<<"bitwise or "<<b<<endl;
	cout<<"negate of "<<x<<"is "<<c<<endl<<"bitwise xor is "<<d<<endl;
	int k=2;
	//***************IMPORTANT********************************** 
	int e=x>>k;//right shift x by k bits
	//>> is similar to divide the no by 2^k and taking floor of it
	int f=x<<k;//left shift x by k bits
	//<< is similar to multiply the no by 2^k
	cout<<"right shift x "<<e<<endl<<"left shift x "<<f<<endl;
	return 0;

}

