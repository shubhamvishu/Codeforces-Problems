//https://codeforces.com/contest/466/problem/A

#include <iostream>
using namespace std;

int main() {

	int n,m,a,b,cost=0;
	cin>>n>>m>>a>>b;
	if((b/m)<a)
	{
	   if(m<n)
	   {
	     while(n-m>=0)
	     {  
	       cost+=b;
	       n=n-m;
	     }
	    if(m>=n && n*a>=b)
	    cost+=b;
	    else if(m>=n && n*a<=b)
	    cost+=n*a;
	     cout<<cost;
	   }
	   else{
	   	if(b<n*a)
	            cout<<b;
	            else
	            cout<<n*a;
	   }
	}
	else
	{
	 cout<<n*a;
	}
	
	return 0;
}
