#include <bits/stdc++.h>
  using namespace std;
  
    bool checkPalidrome(string str , int left , int right){
    
    
        while(left <= right){
          
          if(str[left] != str[right]){
            return false;
          }
          
          left++;
          right--;
        }
        
        return true;
        
        
  }
  
  
bool  isPalindrome(string str , int l , int r){
    while(l <= r){
        if(str[l] != str[r]){
            return checkPalidrome(str , l+1 , r) || checkPalidrome(str , l , r-1) ; 
        } 
        l++;
        r--;
    } 
    return true;
}

  int main()
  
  {
    //write your code here
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string str;
      cin>>str;
     bool ans = isPalindrome(str,0,n-1);
     cout<<ans<<endl;
    }
    
    return 0;
  }
