#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t, i, n;
    cin>>t;
    while(i<n)
    {
      cin>>n;
      if(n%10==0)
      {
        cout<<"0"<<endl;
      }
      else if(n%10==5)
      {
        cout<<"1"<<endl;
      }
      else
      {
        cout<<"-1"<<endl;
      }
      i++;
    }
    return 0;
  }
