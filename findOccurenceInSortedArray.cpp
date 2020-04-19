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
int rightMost(int arr[],int l,int h,int x,int n)
{
	if(l>h)
		return -1;
	int mid=l+(h-l)/2;
	if(arr[mid]==x&&(mid==n-1||arr[mid+1]!=x))
		return mid;
	if(arr[mid]>x)
		return rightMost(arr,l,mid-1,x,n);
	else
		return rightMost(arr,mid+1,h,x,n);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,i,j;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int x;
		cin>>x;
		i=leftMost(arr,0,n-1,x);
		j=rightMost(arr,0,n-1,x,n);
		if(i!=-1&&j!=-1)
			cout<<j-i+1<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}
