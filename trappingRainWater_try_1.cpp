#include<iostream>
using namespace std;
void trapRainWater(int arr[],int n);
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
	trapRainWater(arr,n);
	return 0;
}
void  trapRainWater(int a[],int n)
{
	for(int i=1;i<=n-2;i++)
	{
		int max_left=a[i-1],max_right=a[i+1];
		int j=0,k=n-1;
		while(j!=k||j>k)
		{
			if(a[j]>max_left)
			{	
				max_left=a[j];
				j++;
				cout<<"for "<<a[i]<<
			}
			if(a[k]>max_right)
			{
					max_right=a[k];
					k--;
			}
			else
				j++,k--;
		}
		
	}
	
}
