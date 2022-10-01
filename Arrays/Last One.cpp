#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t>0)
    {
      int n;
      cin>>n;
      
      //input array
      
      int arr[n];
      for(int i=0; i<n; i++)
      {
        cin>>arr[i];
      }
      
      int index=0, count=0;
      
      //finding 1
      
      for(int i=0; i<n; i++)
      {
        if(arr[i]==1)
        {
          count+=1;
          index=i;
        }
      }
      if(count==0)
      {
        cout<<"-1"<<endl;
      }
      else
      {
        cout<<index<<endl;
      }
      t--;
    }
    return 0;
  }
