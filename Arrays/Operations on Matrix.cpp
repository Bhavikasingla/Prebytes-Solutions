#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int M,N,i,j;
    cin>>M>>N;
    int a[M][N],b[M][N],c[M][N],d[M][N];
    for(i=0; i<M;i++)
    {
      for(j=0; j<N; j++)
      {
        cin>>a[i][j];
      }
    }
    for(i=0; i<M;i++)
    {
      for(j=0; j<N; j++)
      {
        cin>>b[i][j];
        c[i][j]=a[i][j]+b[i][j];
      }
    }
    for(i=0; i<M;i++)
    {
      for(j=0; j<N; j++)
      {
        cout<<c[i][j]<<" ";
      }
      cout<<endl;
    }
    for(i=0; i<M;i++)
    {
      for(j=0; j<N; j++)
      {
        d[i][j]=0;
      }
    }
    for(i=0; i<M;i++)
    {
      for(j=0; j<N; j++)
      {
        for(int k=0; k<N; k++)
        {
          d[i][j]+=a[i][k]*b[k][j];
        }
      }
    }
    for(i=0; i<M;i++)
    {
      for(j=0; j<N; j++)
      {
        cout<<d[i][j]<<" ";
        if(j==N-1)
        cout<<endl;
      }
    }
    return 0;
  }
