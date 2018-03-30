//http://codeforces.com/problemset/problem/337/A

#include<iostream>
using namespace std;
int main()
{int p[100],str[100],n,m,i,j,temp,x,min;
cin>>n>>m;
for(i=0;i<m;i++)
{cin>>p[i];
}
for(i=0;i<m-1;i++)
{  for(j=0;j<m-1;j++)
   { if(p[j]>p[j+1])
      { temp=p[j];
        p[j]=p[j+1];
        p[j+1]=temp;
      }
   }
}
for(i=0;i<(m-n+1);i++)
{str[i]=p[i+n-1]-p[i];
}
min=str[0];
for(i=1;i<(m-n+1);i++)
{ if(str[i]<min)
   {min=str[i];}
}
cout<<min;
return (0);
}
