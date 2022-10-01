#include <bits/stdc++.h>
  using namespace std;
  
  int sum(int n)
  {
    int r, s=0;
    while(n!=0)
    {
      r=n%10;
      s+=r;
      n/=10;
    }
    return s;
  }
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0)
    {
      int n;
      cin>>n;
      cout<<sum(n)<<endl;
      T--;
    }
    return 0;
  }
