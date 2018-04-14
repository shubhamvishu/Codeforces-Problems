//http://codeforces.com/problemset/problem/5/B

#include <iostream>
#include<list>
#include<algorithm>
using namespace std;
#define LEFT 0
#define RIGHT 1

int main() {
	// your code goes here
	list<char>l1[1000];
	list<char>::iterator it;
	string s;
	int k=0,m=0,x,a,b,dir=LEFT;
	while(getline(cin,s))
	{
                      	x=s.length();
                      	m=max(m,x);
                      	for(int i=0;i<s.length();i++)
		{
		   l1[k].push_back(s[i]);	
		}
		k++;
	}
	//cout<<m<<endl;
	for(int i=0;i<k;i++)
	{   it=l1[i].begin();
	    a=l1[i].size();
	    if((m-a)%2==0)
	     {
	       b=(m-a)/2;
	       //cout<<"ssss"<<b;
	       l1[i].insert(l1[i].begin(),b,' ');
	       //cout<<l1[i].size();
	       l1[i].insert(l1[i].end(),b,' ');
	       //cout<<l1[i].size();
	       
	     }
	     else if((m-a)%2!=0)
	     {
	       b=(m-a)/2;
	        l1[i].insert(l1[i].begin(),b,' ');
	       l1[i].insert(l1[i].end(),b,' ');
	       if(dir==LEFT)
	         {l1[i].insert(l1[i].end(),' ');
	           dir=RIGHT;}
	       else  
	         {l1[i].insert(l1[i].begin(),' ');
	           dir=LEFT;}
	     }
	    
	}
	for(int i=0;i<m+2;i++)
	cout<<"*";
	cout<<endl;
	for(int i=0;i<k;i++)
	{
	for(int j=0;j<m+2;j++)
	   {
	     if(j==0 || j==m+1)
	     cout<<"*";
	     else{
	     	it=l1[i].begin();
	            while(it!=l1[i].end())
	            {
	              cout<<*it++;
	            }
	            j=j+m-1;
	     }
	   }
	   cout<<endl;
	}  
	for(int i=0;i<m+2;i++)
	cout<<"*";
	       
	
	return 0;
}
