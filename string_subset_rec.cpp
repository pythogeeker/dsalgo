#include<iostream>
#include<string.h>
using namespace std;
//TRIED TO SOLVE USING TAKING CHARACTER ARRAY BUT CAN'T SOLVE HELP!!!!!!!!!!!1
void printSub(string str,string curr="",int index =0);
int  main()
{
	string str;
	int count=0;
	cout<<"Enter string"<<endl;
	/*for(int i=0;i<10;i++)
		scanf("%c",&str[i]);
	*/
	cin>>str;
        int len=str.size();
  	/*cout<<"string is"<<str<<"length is"<<len;*/
	printSub(str," ",0);	
	return 0;
}
void printSub(string str,string  curr,int index)
{
	if(index==str.size())
	{
		cout<<curr<<" ";
		return;
	}
	printSub(str,curr,index+1);
	printSub(str,curr+str[index],index+1);
}
