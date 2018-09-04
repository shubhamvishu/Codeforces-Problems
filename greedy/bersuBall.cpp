//https://codeforces.com/contest/489/problem/B

#include <iostream>
#include<algorithm>
using namespace std;

int main() {

	int n,m,a[100],b[100],max,c=0;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	cin>>m;
	for(int i=0;i<m;i++)
	cin>>b[i];
	sort(b,b+m);
	max=n;
	if(m>n)
	max=m;
	for(int i=0;i<n;i++)
	{
	   for(int j=0;j<m;j++)
	   {  //cout<<"aa";
	       if(abs(a[i]-b[j])<=1)
	       {
	       	c++;a[i]=-1999,b[j]=-1999;
			break;
			}
	   }
	}
	cout<<c;
	return 0;
}
