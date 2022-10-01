#include <bits/stdc++.h>
#include <iomanip>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    float t=0;
    std::cout << std::fixed << std::setprecision(1);
    cin>>n;
    while(n--)
    {
      float q, p;
      cin>>q>>p;
      if(q>100)
      {
        t=q*p-0.2*p*q;
      }
      else
      {
        t=q*p;
      }
       cout<<t<<endl;
    }
   // cout<<t;
    return 0;
  }
