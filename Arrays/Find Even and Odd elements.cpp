#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
      int i, n, a[n];
      cin>>n;
      for(i=1; i<=n; i++)
      {
        cin>>a[i];
      }
      for(i=1; i<=n; i++)
      {
        if(a[i]%2==0)
        {
          cout<<a[i]<<" ";
        }
      }
      cout<<endl;
      for(i=1; i<=n; i++)
      {
        if(a[i]%2!=0)
        {
          cout<<a[i]<<" ";
        }
      }
      cout<<endl;
    return 0;
  }
