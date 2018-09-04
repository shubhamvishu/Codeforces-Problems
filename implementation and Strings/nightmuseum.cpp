//https://codeforces.com/contest/731/problem/A

#include <iostream>
using namespace std;

int main() 
{
	string s;
	int a,b;
	cin>>s;
	int c=0;
	for(int i=0;i<s.length();i++)
	{        if(i==0)
	        {   a=abs(s[i]-'a');
		b=26-a;
		if(a<=b)
		c+=a;
		else
		c+=b;
	          	
	        }
	        else{
		a=abs(s[i]-s[i-1]);
	            b=26-a;
		if(a<=b)
		c+=a;
		else
		c+=b;
	        }
	}
	cout<<c;
	return 0;
}
