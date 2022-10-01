#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T--)
    {
      int n, x;
      cin>>n>>x;
      int arr[n];
      int a=-1;
      for(int i=0; i<n; i++)
      {
        cin>>arr[i];
      }
      for(int i=0; i<n; i++)
      {
        if(arr[i]<=x)
        {
          a++;
        }
      }
      cout<<a<<endl;
    }
    return 0;
  }