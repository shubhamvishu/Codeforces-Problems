//http://codeforces.com/contest/938/problem/B

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n,a,m=0,x=0;
	cin>>n;
	while(n--)
	{	cin>>a;
	           if(a-1<1000000-a)
	           {m=a-1;
		x=max(x,m);}
		else{
			m=1000000-a;
			x=max(x,m);
		}
	}
	cout<<x;
	
	return 0;
}
