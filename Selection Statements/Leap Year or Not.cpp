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
      if((n%400==0) || (n%100!=0 && n%4==0))
      {
        cout<<"Yes"<<endl;
      }
      
      else
      {
        cout<<"No"<<endl;
      }
      
    }
    return 0;
  }
