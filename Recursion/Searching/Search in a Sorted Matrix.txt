#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++){
        cin>>arr[i][j];
      }
    }
    int val;
    cin>>val;
    int row=0;
    int col = m-1;
    int flag=0;
    while(row<n && col>=0){
    if(arr[row][col]>val)
      col--;
    else if(arr[row][col] < val)
      row++;
    else
    {
      cout<<row+1<<" "<<col+1<<"\n";
      flag=1;
      break;
    }
  }
  if(flag==0)
    cout<<"-1 -1\n";
  }
return 0;
}