#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int a[n];
      for(int i=0; i<n; i++)
      {
        cin>>a[i];
      }
      int max=a[0];
      int j=0;
      for(int i=1;i<n;i++){
        if(a[i]>max){
          max=a[i];
          j=i;
        }
      }
      cout<<j<<endl;
    }
    return 0;
  }