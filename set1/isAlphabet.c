#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c>=97&&c<=122||c>=65&&c<=90)
		printf("%c is alphabet",c);
	else
		printf("%c is not alphabet",c);
	return 0;
}
