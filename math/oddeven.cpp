//http://codeforces.com/problemset/problem/318/A

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int n,k,m,num;
	cin>>n>>k;
	m=(n+1)/2;
	if(k<=m)
	{
		num=1+(k-1)*2;
	}
	else{
		num=2+(k-m-1)*2;
	}
	cout<<num;
	return 0;
}
