#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		stack <int> s;
		for(int i=1;i<sqrt(n);i++)
		{
			if(n%i==0)
			{
				s.push(i);
				if(i!=sqrt(n))
				   s.push(n/i);
			}
		}
		while(!s.empty())
		{
			cout<<s.top()<<" ";
			s.pop();
		}
		cout<<endl;
	}
	return 0;
}
