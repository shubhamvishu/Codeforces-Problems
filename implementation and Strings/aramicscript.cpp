//https://codeforces.com/contest/975/problem/A

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	vector<char>v1;
	vector<vector<char>>v2;
	vector<char>::iterator it;
	vector<vector<char>>::iterator itr;
	int n,c=0;
	string s,t;
	string temp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		v1.clear();
		for(int j=0;j<s.length();j++)
		{   
			it=find(v1.begin(),v1.end(),s[j]);
			if(it==v1.end())
			{     
				v1.push_back(s[j]);
			}
		}
		sort(v1.begin(),v1.end());
		/*for(int p=0;p<v1.size();p++)
		{
		  cout<<v1[p]<<" ";
		}*/
		itr=find(v2.begin(),v2.end(),v1);
		if(itr==v2.end())
		 {v2.push_back(v1);c++;}
	}
	cout<<c;
	return 0;
	
}
