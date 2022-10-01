#include<iostream>
#include<vector>
  using namespace std;
  int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
  {
    int tank=0;
    int total=0;
    int start=0;

    for(int i=0; i<gas.size(); i++) 
    {
      int current = gas[i]-cost[i];
      tank += current;
      total += current;
        
      if(tank < 0) 
      {
        start = i+1;
        tank = 0;
      }
    }
    return total < 0 ? -1 : start;
  }

  int main()
  {
    int n;
    cin >> n;
    vector<int> gas(n);
    vector<int> cost(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> gas[i];
    }
    for (int i = 0; i < n; ++i)
    {
      cin >> cost[i];
    }
    int result = canCompleteCircuit(gas, cost);
    if(result)
        cout << result << endl;
    else
        cout << "-1" << endl;

    return 0;
}
