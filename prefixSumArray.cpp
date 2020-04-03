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
		int prefix[n];
		prefix[0]=arr[0];
		for(int i=1;i<n;i++)
			prefix[i]=prefix[i-1]+arr[i];

		int sum=getPrefix(prefix,s,e);
		cout<<endl<<sum;
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
