#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int i,n,b=1;
      cin>>n;
      int a[n];
      for(i=0; i<n; i++)
      {
        cin>>a[i];
      }
      for(i=0; i<n; i++)
      {
        b=b*a[i];
      }
      cout<<b<<endl;
    }
    return 0;
  }
