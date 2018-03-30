//#include<iostream>
//#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,p[5]={0},x,m;
    cin>>n;
    for(int i=0;i<n;i++)
    { cin>>a;
     p[a]++;
    }
    int k=(p[1]-p[3])+2*p[2];
    int l=2*p[2];
    //int r;
    if(p[1] >p[3])
    {   m=k;}
    else{m=l;}
        
   if(m%4==0)
         x=p[4]+p[3]+(m/4);// r=0;
        else 
          x=p[4]+p[3]+(m/4)+1;//r=1;
        
    
     cout<<x;
     return 0;
}
