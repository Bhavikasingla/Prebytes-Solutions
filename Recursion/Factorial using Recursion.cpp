#include <bits/stdc++.h>
  using namespace std;
  
  long long fact(int N)
  {
    if(N==0)
    {
      return 1;
    }
    else if(N==1)
    {
      return 1;
    }
    else
    {
      return N*fact(N-1);
    }
  }
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0)
    {
      int N;
      cin>>N;
      cout<<fact(N)<<endl;
      T--;
    }
    return 0;
  }
