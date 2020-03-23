#include<iostream>
using namespace std;
void towerOfHanoi(int n,char from,char to,char use);
int main()
{
	int n;
	cout<<"          WELCOME TO TOWER OF HANOI PROBLEM" <<endl;
	cout<<"Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:"<<endl<<"1) Only one disk can be moved at a time."<<endl<<"2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack."<<endl<<"3) No disk may be placed on top of a smaller disk."<<endl;
	cout<<"Enter the no of discs"<<endl;
	cin>>n;
	towerOfHanoi(n,'x','y','z');

}	
void towerOfHanoi(int n,char from,char to,char use)
{
	if(n==1){
		cout<<"move disc 1 from "<<from<<" to "<<to<<endl;
		return;
	}	
	towerOfHanoi(n-1,from,use,to);
	cout<<"move disc"<<n<<"from "<<from<<"to"<<to<<"using"<<endl;
	towerOfHanoi(n-1,use,to,from);
}	
