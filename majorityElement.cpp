#include <iostream>

using namespace std;
int main()
{
        int T;
        cin>>T;
        while(T--)
        {
                int n;
                cin>>n;
                int arr[n];
                for(int i=0;i<n;i++)
                {
                        cin>>arr[i];
                }
                int max=0,index=-1;
                for(int i=0;i<=n/2;i++)
                {
                    int count=0;                 
                    for(int j=i;j<n;j++)
                    {
                        if(arr[i]==arr[j])
                            count++;
                    }
                    if(count>max)
                        {
                            max=count;
                            index=i;
                        }
                }
                if(max>n/2)
                     {
                         cout<<arr[index]<<endl;
                     }
                else
                     {
                         cout<<"-1"<<endl;
                     }
         }
          return 0;  
       
}
                  

