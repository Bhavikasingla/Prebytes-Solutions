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
      int min=a[0], temp=0;
      for(i=0; i<n; i++)
      {
        if(a[i]<min)
        {
          min=a[i];
          temp=i;
        }
      }
      cout<<temp<<endl;
    }
    return 0;
  }
