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
      for(int i=0; i<n; i++)
      {
        cin>>a[i];
      }
      long long k=1;
      for(int i=0; i<n; i++)
      {
        k*=a[i];
      } 
       for(int i=0; i<n; i++)
      {
        a[i]=(k/a[i]);
      }
      for(int i=0; i<n; i++)
      {
        cout<<a[i]<<" ";
      }
      cout<<endl;
    }
    // cout<<endl;
    return 0;
  }
