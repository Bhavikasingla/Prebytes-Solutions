#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n, sum=0;
    cin>>n;
    while(n--)
    {
      int t, c;
      cin>>t>>c;
      if(c-t>=2)
      {
        sum++;
        
      }
      //cout<<sum<<endl;
    }
    cout<<sum<<endl;
    return 0;
  }
