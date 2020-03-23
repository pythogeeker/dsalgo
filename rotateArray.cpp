#include<iostream>
using namespace std;
int main()
{
	int n,d;
        cout<<"enter size of array"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter "<<n<<"elements"<<endl;
        for(int i=0;i<n;i++)
        {
                cin>>arr[i];
        }
	cout<<"enter the rotation index"<<endl;
	cin>>d;
        cout<<"Befor rotation"<<endl;
	for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<" ";
        }
	for(int i=0;i<d;i++)
	{
		int temp=arr[0];
		for(int j=0;j<n-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
        cout<<endl<<"After rotation"<<endl;
        for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<" ";
        }
	cout<<endl;
	return 0;
}

