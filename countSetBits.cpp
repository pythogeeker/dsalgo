#include<iostream>
using namespace std;
int main()
{
	//It seems pretty easy but logic is very good think first and then see my solution
	//It solves in O(no_of_set_bits) instead of O(no_of_bits)
	int n;
	cout<<"enter the no "<<endl;
	cin>>n;
	int res=0;
	while(n>0)
	{
		n=n&(n-1); //what we are doing is removing a bit one by one from right and counting after removing
			   // CALLED AS BRIAN KARINGHTON ALGORITHM
		res++;
	}
	cout<<"No of SET bits are "<<res<<endl;
	return 0;
}
