#include<iostream>
using namespace std;
int main()
{
	char ch;
	int i=1, j=1;
	cin>>ch;
	if(ch=='V'){
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<j;
		}
		
		for(j=i*2; j<10; j++)
		{
			cout<<" ";
		}
		
		for(j=i; j>=1; j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
	}
}
