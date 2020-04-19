#include<iostream>
using namespace std;
int leftMost(int arr[],int l,int h,int x)
{
	if(l>h)
	return -1;
	int mid=l+(h-l)/2;
	if(arr[mid]==x&&(mid==0||arr[mid-1]!=x))
		return mid;
	if(arr[mid]>=x)
		return leftMost(arr,l,mid-1,x);
	else
		return leftMost(arr,mid+1,h,x);
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
		int x;
		cin>>x;
		i=leftMost(arr,0,n-1,x);
		cout<<i<<endl;
	}
	return 0;
}
