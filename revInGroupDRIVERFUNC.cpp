vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    // your code here
     int s=0,e=n-1;
     while(s<n)
     {
         int low=s,high=s+(k-1);
         if(high>n-1)
            high=n-1;
         while(low<high)
         {
             swap(mv[low],mv[high]);
             low++,high--;
         }
         s=s+k;
     }
     return mv;
    
}
