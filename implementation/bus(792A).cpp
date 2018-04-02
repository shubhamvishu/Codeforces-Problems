//http://codeforces.com/problemset/problem/792/A

#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
  
    int n,a,k,count=0;

     vector<int> v1,v2;
         cin>>n;
    while(n)
    {
        cin>>a;
        v1.push_back(a);
        n--;
    }
    sort(v1.begin(),v1.end());
    int i=0;
    while(i!=v1.size()-1)
    {
        v2.push_back(v1[i+1]-v1[i]);
        i++;
    }
    sort(v2.begin(),v2.end());
   
    k=v2[0];
    for(int i=0;i<v2.size();i++)
    {
        if(v2[i]!=k)
          break;
        else
         count++;
    }   
    cout<<k<<" "<<count;
    return 0;
}
