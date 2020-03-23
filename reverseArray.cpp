#include<iostream>
using namespace std;
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
	int s=0,e=n-1,temp=0;
	while(s<e)
	{
		temp=arr[s];
		arr[s]=arr[e];
		arr[e]=temp;
		s++;
		e--;
	}
	cout<<"After Reversal"<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
