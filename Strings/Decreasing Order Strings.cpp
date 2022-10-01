#include <bits/stdc++.h>
using namespace std;


  //write your code here
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int l=s.length();
      for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
          if(s[j]<s[i]){
            char temp;
            temp=s[j];
            s[j]=s[i];
            s[i]=temp;
          }
        }
      }
      cout<<s<<endl;
    }
  
  return 0;
}
