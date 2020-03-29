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
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			int count=0;
			for(int j=i;j<n;j++)
			{
				if(arr[j]<arr[i])
					count++;
			}
			arr[i]=count;
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
