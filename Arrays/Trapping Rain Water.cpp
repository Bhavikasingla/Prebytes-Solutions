#include <bits/stdc++.h>
using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    int left[n];
    int right[n];
    int ans=  INT_MAX;
    int leftA  = INT_MIN;
    int rightA = INT_MIN;
    
    for(int i=0;i<n;i++){   
        if(arr[i] > leftA){
            leftA = arr[i];    
        }
       left[i] =leftA;
    }
    
    for(int i=n-1;i>=0;i--){   
        if(arr[i] > rightA){
            rightA = arr[i];    
        }
       right[i] = rightA;
    }
    
    int water = 0;
    for(int i=0;i<n;i++){  
        int minA = min(left[i] , right[i]);
        water+=(minA - arr[i]);
        }  
        cout<<water<<endl;
    }  
    return 0;
  }
