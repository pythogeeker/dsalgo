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
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,count=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];

		for(int i=0;i<n;i++)
			if(gcd(arr[i],arr[i+1])!=1)
				count++;
		cout<<count<<endl;
	}
	return 0;
}
