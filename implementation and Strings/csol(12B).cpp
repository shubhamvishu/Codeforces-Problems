#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   vector<int>v1;
    string s1,s2;
    int k,temp;
    cin>>s1>>s2;
    if(s1.length()!=s2.length())
    {
    	cout<<"WRONG_ANSWER";
    	exit(0);
	}
    for(int i=0;i<s1.length();i++)
    {
    	 k=s1[i]-48;
    	 v1.push_back(k);
	}
	sort(v1.begin(),v1.end());
	
	if(v1[0]==0)
	{
		for(int i=0;i<v1.size();i++)
		{
			if(v1[i]!=0)
			{
				temp=v1[i];
				v1[i]=v1[0];
				v1[0]=temp;
				break;
			}
		}
	}
	for(int i=0;i<v1.size();i++)
	{
		if(v1[i]!=(s2[i]-48))
		{
		 cout<<"WRONG_ANSWER";
		 exit(0);
		}
	}
	cout<<"OK";
	  return 0;
}
