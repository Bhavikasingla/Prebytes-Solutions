#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0)
    {
      int N;
      cin>>N;
      int A[N];
      //cin>>K;
      for(int i=0; i<N; i++)
      {
        cin>>A[i];
      }
      int K;
      cin>>K;
      int  i=0;
      int j=N-1;
      
        while(i<j)
        {
          if(A[i]+A[j]==K)
          {
            cout<<i<<" "<<j<<endl;
            break;
          }
          else if(A[i]+A[j]<K)
          {
            i++;
          }
          else
          {
            j--;
          }
          if(i>=j)
          {
            cout<<"no answer"<<endl;
          }
        }
      
      T--;
    }
    return 0;
  }
