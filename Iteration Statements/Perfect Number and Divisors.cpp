#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    //int sum=0;
    while(t--)
    {
      int i, n;
      cin>>n;
      int sum=0;
      for(i=1; i<n; i++)
      {
        if(n%i==0)
        {
          sum+=i;
        }
      }
      if(sum==n)
      {
        cout<<"true"<<endl;
      }
      else
      {
        cout<<"false"<<endl;  
      }
    }
    return 0;
  }
