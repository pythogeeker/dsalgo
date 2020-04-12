#include <stdio.h>
#include<math.h>
int checkPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
        
    }
    return 1;
}
int main() {
	//code
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int L,R;
	    scanf("%d%d",&L,&R);
	    int res=0,y=0;
	    for(int i=L;i<=R;i++)
	    {
	        while(i>0)
	        {
	            i=i&(i-1);
	            res++;
	        }
	        if(res>=2)
	           {
	             int en=checkPrime(res);
	             if(en==1)
	                y++;
	           }
	    }
	    printf("%d\n",y);
	}
	return 0;
}
