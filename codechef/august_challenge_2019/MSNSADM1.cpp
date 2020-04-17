#include <iostream>
using namespace std;

int main() {
int T,N;
cin>>T;
for (int i=0;i<T;i++)
{
    cin>>N;
    int A[N],B[N];
    for(int j=0;j<N;j++)
    {
        cin>>A[j];
    }
        for(int k=0;k<N;k++)
    {
        cin>>B[k];
    }
        int C[N];
       for(int m=0;m<N;m++)
         {
           int l=((A[m]*20)-(B[m]*10));
           if(l>0)
           C[m]=l;
           else
           C[m]=0;
         }
       for(int n = 1;n<N;n++)
         {
         if(C[0] < C[n])
           C[0] = C[n];
         }
         cout<<C[0]<<endl;
}
	return 0;
}

