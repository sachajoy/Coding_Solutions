#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    long long int t,n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      long long int x=1,p=1;
      while(x<n)
      {
        p*=3;
        x+=p;
      }
      while(p>1)
      {
        p/=3;
        if(x-p>=n)
          x-=p;
      }
      cout<<x<<"\n";
    }
    //write your code here
    
    return 0;
  }