#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      long long a[n];
      int c=-1;
      for(int i=0; i<n; i++)
      {
        cin>>a[i];
      }
      for(int i=0; i<n; i++)
      {
        if(a[i]==1)
        {
          if(a[i-1]==1)
          {
            break;
          }
          else
          {
            c=i;
          }
        }
      }
      cout<<c<<endl;
    }
    return 0;
  }