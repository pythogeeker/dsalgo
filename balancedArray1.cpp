#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
		int n,i;
		cin>>n;
		long int arr[n],prefix[n],sum;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(n==2)
		{
		    sum=arr[1]-arr[0];
		    if(sum<0)
		    sum=-sum;
		}
		else{
		    prefix[0]=arr[0];
		    for(i=1;i<=n/2-1;i++)
			    prefix[i]=arr[i]+prefix[i-1];
        
            prefix[n/2]=arr[n/2];
	    
	        for(i=n/2+1;i<=n-1;i++)
	            prefix[i]=arr[i]+prefix[i-1];
	     
	        sum= prefix[n/2-1]-prefix[n-1];
	        if(sum<0)
	            sum=-sum;
	        }
	   cout<<sum<<endl;
	}
	return 0;
}
