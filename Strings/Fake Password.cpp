#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t=0;
    cin>>t;
    while(t>0){
      string s,g;
      cin>>s;
      cin>>g;
      int m=s.length();
        if(s[0]==g[2] || s[0]==g[m-2]){
          if(s[1]==g[3] ||s[1]==g[m-1]){
            cout<<"Yes"<<endl;
          }
          else{
            cout<<"No"<<endl;
          }
        }
        else{
          cout<<"No"<<endl;
          }
      t=t-1;    
    }
    return 0;
  }
