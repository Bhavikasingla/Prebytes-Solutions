#include<iostream>
using namespace std;
int main(){
	int n,t;
//	cout<<"enter test cases\n";
	cin>>t;

	while(t--){
	//	cout<<"enter numbers \n";
		cin>>n;
		int c=0;
		while(n>0){
			if(n%10==5)
				c++;
			n=n/10;
			
		}
	cout<<c<<endl;	
	}
	
}
