#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n, k;
    cin>>n>>k;
    int a=0;
    int t=240-k;
    for(int i=1;i<=n;i++){
      if(t>i*5){
        a++;
      }
      t-=5*(i);
    }
    cout<<a<<endl;
    return 0;
  }