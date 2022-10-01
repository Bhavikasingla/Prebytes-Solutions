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
      int max=a[0], min=a[0];
      for(i=0; i<n; i++)
      {
        if(a[i]<min)
        {
          min=a[i];
        }
      }
      for(i=0; i<n; i++)
      {
        if(max<a[i])
        {
          max=a[i];
        }
      }
      cout<<min<<" "<<max<<endl;
    }
    return 0;
  }
