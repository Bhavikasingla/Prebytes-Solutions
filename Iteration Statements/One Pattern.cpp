#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int i, j, n;
    cin>>n;
    for(i=0; i<=5; i++)
    {
      for(j=0; j<=i-1; j++)
      {
        cout<<n<<" ";
      }
      cout<<endl;
    }
    return 0;
  }
