#include<iostream>
using namespace std;
void rotateArray(int arr[],int n,int d);
void reverseArray(int arr[],int low,int high);
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
	rotateArray(arr,n,2);
	cout<<"After rotation"<<endl;
	for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<" ";
        }
	return 0;
}
void reverseArray(int arr[],int low ,int high)
{
int s=low,e=high,temp=0;
	while(s<e)
	{
		temp=arr[s];
		arr[s]=arr[e];
		arr[e]=temp;
		s++;
		e--;
	}
}
void rotateArray(int arr[],int n,int d)
{
	reverseArray(arr,0,d-1); //reversing till the rotating index
	reverseArray(arr,d,n-1); //reversing from the rotating index till last element
	reverseArray(arr,0,n-1); //reversing from start to end
}
