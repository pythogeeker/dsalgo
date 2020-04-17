#include <iostream>
#include<math.h>
using namespace std;
long long  primeFactorise(long long n)
{
    long long  x=n,i,sum=0,count=0;
    while(n%2==0)
    {
        count++;
        n=n/2;
    }
    for(i=3;i<=sqrt(x);i++)
    {
            while(n%i==0)
            {
                count++;
                n=n/i;
               
            }
    }
    if(n>2)
        count++;
    return count;
}
int main(){
	int T;
	cin>>T;
	while(T--)
	{
	    long long x,k;
	    cin>>x>>k;
	    
	    if(primeFactorise(x)>=k)
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	  
	}
	return 0;
}

