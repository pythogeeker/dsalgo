#include <iostream>
#include<string.h>

using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
     {
      string s;
      cin>>s;
     int l =s.size();
      int zero=0,one=0;
      for(int i=0;i<l;i++)
      {
          if(s[i]=='0')
          zero++;
          else if(s[i]=='1')
          one++;
      }
      
      if(one%2==0)
         cout<<"LOSE"<<endl;
	  else
	  cout<<"WIN"<<endl;
     }
	
	return 0;
}

