//https://codeforces.com/problemset/problem/266/B

#include <iostream>
using namespace std;
void swap(char &a,char &b)
{
	char temp=a;
	a=b;
	b=temp;
}
int main() {
	// your code goes here
	int n,t;
	string s;
	cin>>n>>t;
	cin>>s;
	while(t>0)
	{
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]=='B'&&s[i+1]=='G')
		{
			swap(s[i],s[i+1]);
			i++;
		}
	}
	t--;
	}
	cout<<s;
	return 0;
}
