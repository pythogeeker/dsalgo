#include <iostream>
using namespace std;

int main() {
    
        int T;
        cin>>T;
        while(T--)
        {
                int n,k;
                cin>>n>>k;
                int arr1[n];
                for(int i=0;i<n;i++)
                {
                        arr1[i]=0;
                }
                int arr2[k];
                for(int i=0;i<k;i++)
                {
                        cin>>arr2[i];
                }
                for(int i=0;i<k;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(j+1>=arr2[i])
                        {
                            ++arr1[j];
                        }
                    }
                }
                for(int i=0;i<n;i++)
                {
                        cout<<arr1[i]<<" ";
                }
                cout<<endl;
        }   
	return 0;
}
