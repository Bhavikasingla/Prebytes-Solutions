#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }
    sort(a,a+n);
    int q;
    cin>>q;
    while(q--)
    {
      int b,c=0,i=0;
      cin>>b;
      if(b<a[0])
      {
        c=0;
      }
      else if(a[n-1]<b)
      {
        c=n;
      }
      else
      {
        for(int i=0; i<n; i++)
        {
          if(a[i]<=b)
          {
            c++;
          }
          else
          {
            break;
          }
        }
      }
      cout<<c<<endl;
    }
    return 0;
  }