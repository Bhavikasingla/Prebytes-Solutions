#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T--)
    {
      int n;
      cin>>n;
      char a[n];
      for(int i=0; i<n; i++)
      {
        cin>>a[i];
      }
      int count=0;
      int i;
      for(int i=0; i<n; i++)
      {
        if(a[i]=='x')
        {
          count++;
        }
      }
      cout<<count<<endl;
    }
    return 0;
  }