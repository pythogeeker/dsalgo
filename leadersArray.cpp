#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void leaders(int arr[],int n);
//use stack only if order of leaders in array is important otherwise don't use it
int main()
{

        int n;
        cout<<"enter size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter "<<n<<" elements"<<endl;
        for(int i=0;i<n;i++)
        {
                cin>>arr[i];
        }
	leaders(arr,n);
	return 0;
}	
void leaders(int arr[],int n)
{
	int max;
	stack <int> s;
	max=arr[n-1];
	cout<<"Leaders in the input array are"<<endl;
	s.push(max);
	for(int i=n-2;i>=0;i--)
	{
	
		if(max<arr[i])
		{	
			max=arr[i];
			s.push(max);
		}
	}
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}
