#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      long long arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      int ans=-1;
      map<int,int>m;
      for(int i=0;i<n;i++){
        m[arr[i]]++;
      }
      map<int,int>::iterator i;
      for(i=m.begin();i!=m.end();i++){
        if(i->second>(n/2)){
          ans=i->first;
        }
      }
      cout<<ans<<endl;
    }
    
    return 0;
  }