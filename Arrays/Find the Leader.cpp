#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int i, n;
      cin>>n;
      int a[n];
      for(i=0; i<n; i++)
      {
        cin>>a[i];
      }
      int m=0;
      for(i=n-1;i>=0;i--){
      if(a[i]>=m){
        cout<<a[i]<<" ";
        m=a[i];
      }
        
      }
     cout<<endl;
    }
    return 0;
  }
