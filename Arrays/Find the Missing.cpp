#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      long long i, n;
      cin>>n;
      int a[n];
      for(i=0; i<n-1; i++)
      {
        cin>>a[i];
      }
      long long sum=(n*(n+1)/2);
      long long sumarr=0;
      for(i=0; i<n-1; i++)
      {
        sumarr+=a[i];
      }
      long long ans=sum-sumarr;
      cout<<ans<<endl;
    }
    return 0;
  }
