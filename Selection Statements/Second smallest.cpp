#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int a, b, c, d;
    cin>>a>>b>>c;
    d= (a > b) ? ((a>c)?((b>c)?b:c):((a>b)?a:c)):((b>c)?((a>c)?a:c):((a>b)?a:b));
    cout<<d;
    return 0;
  }
