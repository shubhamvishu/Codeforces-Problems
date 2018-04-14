//http://codeforces.com/contest/960/problem/A

#include <iostream>
#include<algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
	// your code goes here
   map<char,int>m1;	
   vector<char>v1;
   vector<char>::iterator it;
   int count=0;
   string s;
   cin>>s;
   for(int i=0;i<s.length();i++)
   {       m1[s[i]]++;
   	it=find(v1.begin(),v1.end(),s[i]);
   	if(it==v1.end())
   	  {
   	  	v1.push_back(s[i]);
   	  }
   	if(i!=0 && s[i]!=s[i-1])
   	 count++;
   	  
   }   
    if(m1['a']!=m1['c'] && m1['b']!=m1['c'])
     cout<<"NO";
     else if(count!=2)
     {
     	cout<<"NO";
     }
     else{
     	if(v1[0]!='a' || v1[1]!='b' ||v1[2]!='c')
     	  cout<<"NO";
     	 else 
     	   cout<<"YES";
     }
	return 0;
}
