#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int i, j, n;
    cin>>n;
    for(i=5; i>=0; i--)
    {
      for(j=1; j<=i; j++)
      {
        cout<<j<<" ";
      }
      cout<<endl;
    }
    return 0;
  }
