//http://codeforces.com/problemset/problem/946/A

#include<iostream>
using namespace std;
int main()
{int n,b=0,c=0;
cin>>n;
while(n>0)
{   int a;
    cin>>a;
  if(a>0)
   b+=a;
   else
   c+=a;
   n--;
}
cout<<b-c;
return 0;
}
