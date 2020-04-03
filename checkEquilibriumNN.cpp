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
		cout<<"Enter "<<n<<" elements"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int index=0;
		for(int i=0;i<n;i++)
		{
			int right_sum=0,left_sum=0;
			for(int j=0;j<i;j++)
				right_sum+=arr[j];
			for(int k=i+1;k<n;k++)
				left_sum+=arr[k];
			if(right_sum==left_sum)
				index=1;
		}
		if(index==1)
			cout<<"TRUE"<<endl;
		else
			cout<<"FALSE"<<endl;
	}
	return 0;
}
