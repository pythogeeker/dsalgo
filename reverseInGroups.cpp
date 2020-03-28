#include<iostream>
using namespace std;
void reverseArray(int arr[],int low,int high);
void fun(int arr[],int n,int k)
{
    int s=0,l=n-1;
    while(s<=n-1)
    {
    if((s+k-1)>(n-1))
        {
            reverseArray(arr,s,n-1);
            return;
        }
        reverseArray(arr,s,s+(k-1));
        s=s+k;
        }
}
int main()
{
        int T;
        cin>>T;
        while(T--)
        {
	    int n,k;
        cin>>n>>k;
        int arr[n];
        
        for(int i=0;i<n;i++)
        {
                cin>>arr[i];
        }
	
	    fun(arr,n,k);
	
	for(int i=0;i<n;i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        
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

