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
			cin>>arr[i];
		int sum=0,index=0;
		for(int i=0;i<n;i++)
			sum+=arr[i];
		int left_sum=0;
		for(int i=0;i<n;i++)
		{
			//sum-arr[i] is denoting right sum here
			if(left_sum==sum-arr[i])
				index=1;
			left_sum+=arr[i]; //incrasing leftsum index wise
			sum-=arr[i]; //decreasing right sum index wise
		}
		if(index==1)
			cout<<"TRUE"<<endl;
		else
			cout<<"FALSE"<<endl;
	}
	return 0;
}
