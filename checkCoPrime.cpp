#include<iostream>
using namespace std;
int  gcd(int a ,int b)
{
	if(a==0)
		return b;
	if(b==0)
		return a;
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	return gcd(a,b-a);
}
void checkCoPrime(int x,int y)
{
	if(gcd(x,y)==1)
		cout<<"Co-Prime"<<endl;
	else
		cout<<"Not Co-Prime"<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		checkCoPrime(n,m);
		
	}
	return 0;
}
