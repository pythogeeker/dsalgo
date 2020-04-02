#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}

	for(int i=0;i<n;i++)
	{
			int s=0,e=n-1;
			if(s<e)
			{
				int temp=arr[s][i];
				arr[s][i]=arr[e][i];
				arr[e][i]=temp;
				s++,e--;
			}
	}
	for(int i=0;i<n;i++)
	{
		cout<<endl;
		for(int j=0;j<n;j++)
			cout<<arr[i][j]<<" ";
	}

			return 0;
}
