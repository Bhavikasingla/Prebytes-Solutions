#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int M,N,i,j;
    cin>>M>>N;
    int a[M][N];
    for(i=0; i<M; i++)
    {
      for(j=0; j<N; j++)
      {
        cin>>a[i][j];
      }
    }
    for(i=0; i<M; i++)
    {
      for(j=0; j<N; j++)
      {
        if(i<j)
        {
          cout<<"0"<<" ";
        }
        else
        {
          cout<<a[i][j]<<" ";
        }
      }
      cout<<endl;
    }
    for(i=0; i<M; i++)
    {
      for(j=0; j<N; j++)
      {
        if(j<i)
        {
          cout<<"0"<<" ";
        }
        else
        {
          cout<<a[i][j]<<" ";
        }
      }
      cout<<endl;
    }
    return 0;
  }
