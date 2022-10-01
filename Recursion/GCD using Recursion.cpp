#include <bits/stdc++.h>
  using namespace std;
  
  int gcd(int N, int P)
  {
    if(P==0)
    return N;
    return gcd(P,N%P);
  }
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0)
    {
      int N,P;
      cin>>N>>P;
      cout<<gcd(N,P)<<endl;
      T--;
    }
    return 0;
  }
