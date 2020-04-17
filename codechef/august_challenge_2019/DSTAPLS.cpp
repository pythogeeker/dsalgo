#include <iostream>
using namespace std;

int main() {
long long int T,N,K;
cin>>T;
for(int i=0;i<T;i++)
{
    cin>>N;
    cin>>K;
   long long int j=N/K;
   
    if(j%K==0)
     cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
	return 0;
}

