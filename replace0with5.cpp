#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int num=n;
		int result=0;
		int decimalPlace =1;
		if(n==0)
			result=result+(5*decimalPlace);
		while(n>0)
		{
			if(n%10==0)
				result+=5*decimalPlace;
			n=n/10;
			decimalPlace*=10;
		}
		cout<<num+result<<endl;
	}
	return 0;
}
