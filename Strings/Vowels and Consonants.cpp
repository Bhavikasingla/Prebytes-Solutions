#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int i;
      string s;
      cin>>s;
      int count=0, count1=0;
      for(i=0; i<s.length(); i++)
      {
        //char ch=s[i];
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
          count+=1;
        }
        else 
        {
          count1+=1;
        }
      }
      cout<<count<<" "<<count1<<endl;
    }
    return 0;
  }
