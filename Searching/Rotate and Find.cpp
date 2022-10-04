#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
  
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      long long arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      long long j;
      cin>>j;
      long long a=-1;
      for(int i=0;i<n;i++){
        if(arr[i]==j){
          a=i;
        }
      }
      cout<<a<<endl;
    }  
    return 0;
  }