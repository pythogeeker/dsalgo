#include<iostream>
using namespace std;
void stockPredict(int arr[],int n);
int main()
{

	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<"elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Before reversal"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	stockPredict(arr,n);
	return 0;
}
void stockPredict(int a[],int n)
{
	int profit=0;
	for(int i=0;i<n;i++)
	{
		int local_max,local_min=0;
		if(i==0)
			if(a[i]<a[i+1])
				local_min=a[i];
		 if (i==n-1)
			if(a[i]>a[i-1])
				local_max=a[i];
		if(i>0&&i<n-1){
		if(a[i-1]>a[i]<a[i+1])
			local_min=a[i];
		if(a[i-i]<a[i]>a[i+1])
			local_max=a[i];
			}
		
		profit=profit+(local_max-local_min);
	}
	cout<<"Profit is "<<profit<<endl;
}
