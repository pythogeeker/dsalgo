#include<stdio.h>
#include<stdlib.h>
//This solution is not efficient we use dp to solve this problem
int maxCut(int n,int a,int b,int c);
int max(int a,int b,int c);
void main()
{
	int n,a,b,c;
	printf("Enter the size of rope\n");
	scanf("%d",&n);
	printf("Enter the parameters\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("n=%d,a=%d,b=%d,c=%d\n",n,a,b,c);
	int ans=maxCut(n,a,b,c);
	printf("%d",ans);

}
int maxCut(int n,int a,int b,int c)
{
	
	if(n<0)
		return -1;
	else if (n==0)
		return 0;
	else{
		int res=max(maxCut(n-a,a,b,c),maxCut(n-b,a,b,c),maxCut(n-c,a,b,c));
		if(res==-1)
			return -1;
	        return res+1;
             }
}
int max(int a,int b,int c)
{
	if(a>b&&a>c)
		return a;
	else if(b>a&&b>c)
		return b;
	else
		return c;
}
