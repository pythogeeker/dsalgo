
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int l[n],r[n],i;
		
		for(i=0;i<n;i++)
			cin>>l[i];
		
		for(i=0;i<n;i++)
			cin>>r[i];
		
		vector<int>  arr[1000];
		
		for(i=0;i<n;i++)
		{
			arr[l[i]]++;
			arr[r[i]+1]--;
		}
		int max=arr[0],res=0;
		for(i=1;i<1000;i++)
		{
			arr[i]+=arr[i-1];
			if(arr[i]>max)
			{
				max=arr[i];
				res=i;
			}
		}
		cout<<"Maximum Appearing Element is "<<res<<endl;
	}
	return 0;
}
