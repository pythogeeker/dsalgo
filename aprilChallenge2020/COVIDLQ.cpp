#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int num,i,x=1,y=-1;
	    cin>>num;
	    int  vec[num];
	    for(i=0;i<num;i++)
			cin>>vec[i];
	    for(i=0;i<num;i++)
	    {
	        if(vec[i]==1&&y==-1)
	            {
	                y=i;
	            }
	        else
	        {
	            if(vec[i]==1)
	                {
	                    if(i-y<6)
	                    {
	                        x=0;
	                        break;
	                    }
	                     y=i;
	            }
	        }
	    }
			if(x==0)
			     cout<<"NO"<<endl;
			 else 
			     cout<<"YES"<<endl;
	}
			return 0;
	}
