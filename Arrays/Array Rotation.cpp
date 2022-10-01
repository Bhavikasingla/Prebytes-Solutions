#include <bits/stdc++.h>
  using namespace std;
  
  void  reverse(int arr[] , int start, int end){
    int mid = (start+end)/2;
    for(int i=start ; i<=mid ; i++){
      int temp  = arr[i];
      arr[i] = arr[end];
      arr[end] = temp;
      end--;  
    } 
  }
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];  
      }
      k = k % n ;
      if(k >0 && k!=n){
        reverse(arr, 0,n-1-k);
        reverse(arr , n-k,n-1);
        reverse(arr , 0,n-1);
      }

      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }  
    }
    return 0;
  }
