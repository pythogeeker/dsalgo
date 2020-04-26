#include<iostream>
using namespace std;
int BinarySearch(int arr[],int l,int h,int x){
	if(l>h)
		return -1;
	int mid=l+(h-l)/2;
	if(arr[mid]==x)
		return x;
	if(arr[mid]>x)
		return BinarySearch(arr,l,mid-1,x);
	return BinarySearch(arr,mid+1,h,x);
}
int findPivot(int arr[],int l,int h)
{
	if(l>h)
		return -1;
	int mid=l+(h-l)/2;
	if(mid<h&&arr[mid]>arr[mid+1])
		return mid;
	if(arr[mid]<arr[l]&&l<mid)
		return findPivot(arr,l,mid-1);

	return findPivot(arr,mid+1,h);
}
		

int findElement(int arr[],int n,int x)
{
	int pivot=findPivot(arr,0,n-1);
	if(pivot==-1)
		return BinarySearch(arr,0,n-1,x);
	int i=BinarySearch(arr,0,pivot,x);
	int j=BinarySearch(arr,pivot+1,n-1,x);
	if(i!=-1)
		return i;
	else
		return	j;
}
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int n ;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
	cin>>arr[i];
    int x;
    cin>>x;
    i=findElement(arr,n,x);
    cout<<i<<endl;
  }
}
