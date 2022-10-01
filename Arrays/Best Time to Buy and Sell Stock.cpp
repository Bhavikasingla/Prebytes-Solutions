#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T--){
      long long n;
      cin>>n;
      long long a[n];
      for(int i=0; i<n; i++)
      {
        cin>>a[i];
      }
      int max=0;
      for(int i=0; i<n-1; i++)
      {
        for(int j=i+1; j<n; j++)
        {
          if(a[i]<a[j]&&(a[j]-a[i])>max)
          {
            max=a[j]-a[i];
          }
        }
      }
      cout<<max<<endl;
    }
    return 0;
  }
