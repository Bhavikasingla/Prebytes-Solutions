#include <bits/stdc++.h>
  using namespace std;
 bool check=false;
  void func(string s,int i,int j){
        if(s[i]!=s[j]){
          check=true;
        }
        if (i<j){
            func(s,i+1,j-1);
        }
        
      }
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int l=s.length();
      int i=0;
      int j=l-1;
      func(s,i,j);
      if(check==false){
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
    }
    
    return 0;
  }
