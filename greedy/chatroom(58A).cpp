//http://codeforces.com/problemset/problem/58/A

#include<iostream>
#include<cstring>
using namespace std;
int main()
{char S[100];
int n,i,pos=0,count=0;
gets(S);
n=strlen(S);
for( i=0;i<n;i++)
{if(S[i]=='h')
  {pos=i+1;
   for(i=pos;i<n;i++)
    {if(S[i]=='e')
      {pos=i+1;
      for(i=pos;i<n;i++)
        {if(S[i]=='l')
         {pos=i+1;
           for(i=pos;i<n;i++)
           {if(S[i]=='l')
             {pos=i+1;
             for(i=pos;i<n;i++)
               {if(S[i]=='o')
                 {pos=i+1;
				   count=1; 
				 
                 }
               }
             }
           }
         }
        }
      } 
    }
  }
}
if(count==0)
 {cout<<"NO";
 }
 else
 {cout<<"YES";
 }
return 0;	
	
}
