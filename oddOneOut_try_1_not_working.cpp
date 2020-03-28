#include<iostream>
using namespace std;
int main()
{

	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(a[j]^a[k]==0)
			{
				cout<<"set"<<a[j]<<" "<<a[k]<<endl;
				a[j]=a[k]=0;
				
			}
		}	
	}
	for(int i=0;i<n;i++)
		{
			if(a[i]!=0)
			 {	
				cout<<a[i]<<endl;
			 }
		}
}
