#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int a, b;
      cin>>a>>b;
      double a_angle=(60*a+1*b)/2;
      double b_angle=(a*0+b*6);
      double x=abs(a_angle - b_angle);
      if(x<=180)
      {
        cout<<x<<endl;
      }
      else
      {
        cout<<(360-x)<<endl;
      }
    }
    return 0;
  }
