#include<iostream>
using namespace std;
int  BinarySearch(int arr[],int l,int h,int x)
{
	if(l>h)
	return -1;
	int mid=l+(h-l)/2;
	if(arr[mid]==x)
		return mid;
	if(arr[mid]>x)
		return BinarySearch(arr,l,mid-1,x);
	else
		return BinarySearch(arr,mid+1,h,x);
}
int findElement(int arr[],int x)
{
	int j;
	if(arr[0]==x)
		return 0;
	int i=1;
	while(arr[i]<x)
		i=i*2;
	if(arr[i]==x)
		return i;
	if(arr[i]>x)
		j=BinarySearch(arr,i/2,i,x);
		return j;
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
		i=findElement(arr,x);
		cout<<i<<endl;
	}
	return 0;
}
