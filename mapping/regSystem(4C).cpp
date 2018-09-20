//http://codeforces.com/problemset/problem/4/C

#include <iostream>
#include<map>
using namespace std;
map<string,int>m1;

int main() {
	// your code goes here
	int n,x;
	string s;
	cin>>n;
	while(n--)
	{
                cin>>s;
                x=++m1[s];
                if(x==1)
                 cout<<"OK"<<endl;
                else
                cout<<s<<x-1<<endl;
                
	}
	return 0;
}
