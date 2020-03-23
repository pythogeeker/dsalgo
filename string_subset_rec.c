#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printSub(String str,String curr="",int index =0);
void main()
{
	String str;
	int count=0;
	printf("Enter string\n");
	/*for(int i=0;i<10;i++)
		scanf("%c",&str[i]);
	*/
	fgets(str,10,stdin);
        int len=strlen(str);
	len=len-1;
  	printf("string is %s,length is %d ",str,len);
	printSub(str,'',0);	
}
void printSub(String str,String  curr,int index)
{
	if(index==strlen(str)-1)
		return;
	printSub(str,curr,index+1);
	printSub(str,curr+*str[index],index+1);
}
