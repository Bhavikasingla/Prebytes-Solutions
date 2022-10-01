#include <bits/stdc++.h>
using namespace std;
int n;
void func(int n){
    int m=n;
    if(m>0){
      cout<<m<<" ";
      func(m-5);
    }
}

void func2(int m){
  if(m==n){
    cout<<m<<" ";
    cout<<endl;
  }
  else{
    cout<<m<<" ";
    func2(m+5);
  }
}
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      cin>>n;
      func(n);
      int m=n;
      while(m>0){
        m-=5;
      }
      func2(m);
      cout<<endl;
    }
    
    return 0;
  }
