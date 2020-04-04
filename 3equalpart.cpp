#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,i;
		cin>>n;
		int arr[n],prefix[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		prefix[0]=arr[0];
		for(i=1;i<n;i++)
			prefix[i]=arr[i]+prefix[i-1];
		cout<<"PREFIX ARRAY"<<endl;
		for(i=0;i<n;i++)
			cout<<prefix[i]<<" ";
		cout<<endl;
		int count=0;
		if(prefix[n-1]%3==0)
		{
			int first=prefix[n-1]/3;
			int sec=first*2;
			for(i=0;i<n-1;i++)
			{
				if(prefix[i]==first||prefix[i]==sec)
					count++;
			}
		
		}
		if(count>=2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
