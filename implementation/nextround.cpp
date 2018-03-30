//http://codeforces.com/problemset/problem/158/A

#include<iostream>
using namespace std;
int main()
{
	int a[1000],n,k,count=0,score,i;
	
	cin>>n>>k;
	
	for( i=0;i<n;i++)
	  cin>>a[i];

score=a[k-1];
  if(score==0)
	{    for(i=0;i<n;i++)
      	{   if (a[i]!=0)
		     { count++;}
        }
    }
  
  else {
            for( i=0;i<n;i++)
         	{   if (a[i]>=a[k-1])
		        { count++;}
            }
	           
	   }
	
cout<<count;
 
	return (0);
}
