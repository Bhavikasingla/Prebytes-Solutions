#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T--)
    {
    string s;
    cin >> s;
    string t;
    // cin >> s;
    cin >> t;
    //int j=0;
    long long ls=s.length();
    long long lt=t.length();
    long long ans=0;
    int j=0;
    for (int a=0; a < ls; a++) {
        if (s[a] == t[j]) {
            ans++;
            j++;
            }
        }
        if (ans==lt)
        {
          cout<<"YES"<<endl;
        }
        else
        {
          cout<<"NO"<<endl;
        }
    }
   // cout << message<<endl;
    
    return 0;
  }
