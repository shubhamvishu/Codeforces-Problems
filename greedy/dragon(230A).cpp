//http://codeforces.com/problemset/problem/230/A

#include<iostream>
using namespace std;
int main()
{int s,n,x[2000],y[2000],i,j,temp,count=1;
cin>>s>>n;
for(i=0;i<n;i++)
{cin>>x[i]>>y[i];
 
}
for(i=0;i<n-1;i++)
{ for(j=0;j<n-1;j++)
  {if(x[j]>x[j+1])
    {temp=x[j];
     x[j]=x[j+1];
     x[j+1]=temp;
     temp=y[j];
     y[j]=y[j+1];
     y[j+1]=temp;
     
    }  
    else if(x[j]==x[j+1])
    {  if(y[j]<y[j+1])
       {temp=x[j];
        x[j]=x[j+1];
        x[j+1]=temp;
        temp=y[j];
     y[j]=y[j+1];
     y[j+1]=temp;
       }
    }
  }
}


for(i=0;i<n;i++)
{ if(s>x[i])
  {s+=y[i];
  }
  else
  {
  count=0;
  }
}  
if(count==0)
{ cout<<"NO";}
else{
    cout<<"YES";
}
return 0;
}
