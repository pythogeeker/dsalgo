#include<iostream>
using namespace std;
int main()
{

	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter "<<n<<" numbers"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<n-1;j++)
		a[j+1]=a[j]^a[j+1];
	cout<<a[n-1]<<endl;;
}
