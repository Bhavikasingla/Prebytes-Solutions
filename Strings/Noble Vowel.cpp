#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    
    while(t>0){
      int flag=0;
      string s;
      cin>>s;
      for(int i=0;i<s.length();i++){
        if(s[i]!='a' && s[i]!='e' &&s[i]!='o' && s[i]!='u' && s[i]!='i' && s[i]!='n'){
          if(s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='o' && s[i+1]!='u' && s[i+1]!='i'){
              flag=1;    
          }
        }
        
      }
      if(flag==1){
          cout<<"NO"<<endl;
        }
    else{
          cout<<"YES"<<endl;
        }
      t=t-1;
    }
    return 0;
  }
