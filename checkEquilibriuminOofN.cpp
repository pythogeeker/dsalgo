#include<iostream>
using namespace std;
int getPrefix(int pref[],int low,int high);
int main()
{

	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int arr[n];
		cout<<"Enter "<<n<<" elements"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int s,e;
		cin>>s>>e;
		int prefix1[n],prefix2[n];
		prefix1[0]=arr[0];
		prefix2[0]=arr[n-1];
		for(int i=1;i<n;i++)
			prefix1[i]=prefix1[i-1]+arr[i];
		for(int i=n-2;i>-1;i++)
			prefix2[i]=prefix[i-1]+arr[n-(i+1)];
		
		for(int i=0;i<n;i++)
			if(prefix1[i-1]
	   /*	int sum=getPrefix(prefix,s,e);
		cout<<endl<<sum;*/
	}
	return 0;
}
int  getPrefix(int pref[],int low ,int high)
{
	if(low!=0)
		return pref[high]-pref[low-1];
	else
		return pref[high];
}
