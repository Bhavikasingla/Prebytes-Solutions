#include <bits/stdc++.h>
#include<stack>
using namespace std;

int priority(char ch)
{
	if(ch=='+')
	return 0;
	if(ch=='-')
	return 1;
	if(ch=='*')
	return 2;
	if(ch=='/')
	return 3;
	if(ch=='^')
	return 4;
	
	return -1;
}

string convert(string infix)
{
	string postfix=" ";
	int i=0;
	stack<int> s;
	while(infix[i]!='\0')
	{
		if(infix[i]>='A'&&infix[i]<='Z'||infix[i]>='a'&&infix[i]<='z')
		{
			postfix+=infix[i];
			i++;
		}
		else if(infix[i]=='(')
		{
			s.push(infix[i]);
			i++;
		}
		else if(infix[i]==')')
		{
			while(s.top()!='(')
			{
				postfix+=s.top();
				s.pop();
			}
			s.pop();//to pop opening bracket also
			i++;
		}
		else
		{
		    while(!s.empty()&&priority(infix[i])<=priority(s.top()))
		    {
			    postfix+=s.top();
			    s.pop();
		    }
		    s.push(infix[i]);
		    i++;
	    }
	}
	while(!s.empty())
	{
		postfix+=s.top();
		s.pop();
	}
	return postfix;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	string infix;
	cin>>infix;
	string postfix;
	postfix=convert(infix);
	cout<<postfix<<endl;
	}
	return 0;
}
