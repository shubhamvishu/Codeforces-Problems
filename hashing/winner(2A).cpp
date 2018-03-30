//http://codeforces.com/problemset/problem/2/A

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	string name[1000],w;
	int sc[1000],f=0;
	vector<string> s;
	vector<string>::iterator it;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name[i]>>sc[i];
		it=find(s.begin(),s.end(),name[i]);
		if(it==s.end())
		  s.push_back(name[i]);
	}
	vector<int>num(s.size(),0);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<s.size();j++)
		{
			if(name[i]==s[j])
			 num[j]+=sc[i];
		}
	}
	int max=num[0];	
	for(int i=0;i<num.size();i++)
	{   
		if(num[i]>max)
		max=num[i];
	}

	vector<int>m(s.size(),0);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<s.size();j++)
		{
			if(name[i]==s[j] && f==0)
			 {
			  m[j]+=sc[i];
			   if(m[j]>=max && num[j]>=max)
			    {
			      w=s[j];
		          f=1;
		          break;
		        }
		    break;
	         } 
	   	}
	}
		
	cout<<w;
	return 0;
}
