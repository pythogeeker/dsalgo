#include<iostream>
using namespace std;
int leftMost(int arr[],int l,int h)
{
	if(l>h)
	return -1;
	int mid=l+(h-l)/2;
	if(arr[mid]==1&&(mid==0||arr[mid-1]!=1))
		return mid;
	if(arr[mid]==1)
		return leftMost(arr,l,mid-1);
	else
		return leftMost(arr,mid+1,h);
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,i;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		//we need to find no of occurences of 1 only in this program that's it
		i=leftMost(arr,0,n-1);
		cout<<n-i<<endl;
	}
	return 0;
}
