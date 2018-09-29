//http://codeforces.com/problemset/problem/711/A

#include <iostream>
using namespace std;

int main() {
	
	int n,f=0,x=0;
	char a[1000],b[1000],c[1000],d[1000],e[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
	   cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];
	   if((a[i]=='O'&&b[i]=='O') ||(d[i]=='O'&& e[i]=='O'))
	    f=1;
	}
	if(f==1){
	  cout<<"YES"<<endl;
	  for(int i=0;i<n;i++)
              {
	   if(a[i]=='O' && b[i]=='O' && x==0)
	   {cout<<"++";x=1;}
	   else
	   cout<<a[i]<<b[i];
	   cout<<c[i];
	   if(d[i]=='O' && e[i]=='O' && x==0)
	   {cout<<"++"<<endl;x=1;}
	   else
	   cout<<d[i]<<e[i]<<endl;
	   }
	  
	}
	else
	cout<<"NO";
	return 0;
}
