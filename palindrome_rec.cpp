#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrome(string str,int s,int e);
int main()
{	
	int n;
	string str;
	cout<<"Enter string"<<endl;
	cin>>str;
	/*
	cout<<str[0]<<" "<<str[1]<<" "<<str[2]<<" "<<str[3]<<" "<<str[4]<<"hello"<<endl;
*/	bool var=checkPalindrome(str,0,str.size()-1);
	cout<<var<<endl;
	return 0;

}
bool checkPalindrome(string str,int s,int e)
{
/*	FIRST TRIAL NOT WORKED
 *	if(s==e)
		return true;

	else if (str[s]==str[e])
		checkPalindrome(str,s+1,e-1);
	else
		return false;	
*/
	//SECOND TRIAL WORKED
	if(s==e||s>e)
		return true;
	if(str[s]!=str[e])
		return false;
	return checkPalindrome(str,s+1,e-1);
		}
