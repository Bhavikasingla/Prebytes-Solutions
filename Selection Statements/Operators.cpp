#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int X, Y;
    cin>>X>>Y;
    if(X<Y)
    {
      cout<<X<<" is smaller than "<<Y<<endl;
    }
    else if(X>Y)
    {
      cout<<X<<" is greater than "<<Y<<endl;
    }
    else
    {
      cout<<X<<" is equal to "<<Y<<endl;
    }
    return 0;
  }
