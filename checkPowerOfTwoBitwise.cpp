#include<iostream>
using namespace std;
int main()
{
	//VERY NICE CONCEPT USING BITWISE
	//EG 4 --> 0100 4-1=3--> 0011 0100&0011=0000
	//EG 5 --> 0101 5-1=4-->0100  0101&0100=0100 NON ZERO
	int num;
	cout<<"ENTER THE  NUMBER"<<endl;
	cin>>num;
	//we can write--->>             if(x&&!x&(x-1))
	int check_power=num&(num-1);
	if(check_power==0)
		cout<<"power of two";
	else if(num==0)
		cout<<"not power of two";
	else
		cout<<"not power of two";
	return 0;

}

