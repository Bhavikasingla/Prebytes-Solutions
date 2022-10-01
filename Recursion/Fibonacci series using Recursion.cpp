#include <bits/stdc++.h>
  using namespace std;
  
  int fib(int N)
  {
    if(N<=1)
	  return N;
   	else 
	  return fib(N-1)+fib(N-2);
  }
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0)
    {
      int N, k;
      cin>>N;
      for(int i=1; i<=N; i++)
      {
        k=fib(i);
     	}
     	cout<<k<<endl;
      T--;
    }
    return 0;
  }
