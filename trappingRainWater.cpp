#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int trapRainWater(int arr[],int n);
int main()
{

	int n;
	cout<<"enter size of tank"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" column lengths"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int water=trapRainWater(arr,n);
	cout<<"Amount of water trapped is "<<water<<" units"<<endl;
	return 0;
}
int trapRainWater(int a[],int n)
{
	int trapped_water=0;
	for(int i=1;i<=n-2;i++)
	{
		int max_left=a[i],max_right=a[i];
		for(int j=0;j<i;j++)
		{
			max_left=max(max_left,a[j]);
		}
		for(int j=i+1;j<=n-1;j++)
			max_right=max(max_right,a[j]);
		trapped_water=trapped_water+(min(max_left,max_right)-a[i]);
	}
	return trapped_water;
}
