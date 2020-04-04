
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
		
		int vec[1000];
		
		for(i=0;i<1000;i++)
		    vec[i]=0;
		for(i=0;i<n;i++)
		{
			vec[l[i]]++;
			vec[r[i]+1]--;
		}
		int max=vec[0],res=0;
		for(i=1;i<1000;i++)
		{
			vec[i]+=vec[i-1];
			if(vec[i]>max)
			{
				max=vec[i];
				res=i;
			}

		}
		cout<<"Maximum Appearing Element is "<<res<<endl;
	}
	return 0;
}
