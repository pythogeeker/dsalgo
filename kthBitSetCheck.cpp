#include<iostream>
using namespace std;
int main()
{
	int num,k;
	cout<<"ENTER THE  NUMBER"<<endl;
	cin>>num;
	cout<<"ENTER THE BIT YOU WANT TO CHECK"<<endl;
	cin>>k;
	//logic is we need to bitwise and  a no such that either ouput is a non zero no or zero
	//so to do so we find that we can do 2^k-1 and that's the no which need to be bitwise and
	int pow_two=1<<(k-1);//calculatin th no
	int check_kth=pow_two&num;
	if(check_kth!=0)
		cout<<k<<"th bit is SET";
	else
		cout<<k<<"th bit is not SET";
	return 0;

}

