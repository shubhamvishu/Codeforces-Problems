//http://codeforces.com/problemset/problem/765/C

#include<iostream>
using namespace std;
int main()
{long long k,a,b,x,y,z;
cin>>k>>a>>b;
x=a/k;
y=b/k;
z=x+y;
if((a<k) && b%k!=0)
{cout<<"-1";
}
else if((b<k) && a%k!=0)
{cout<<"-1";
}
else
{cout<<z;
}

return 0;
}
