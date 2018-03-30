//http://codeforces.com/problemset/problem/770/A

#include<iostream>
using namespace std;
int main()
{int n,k,i,j;
char ch='a';
cin>>n>>k;
if(n==k)
{for(i=0;i<n;i++)
  {cout<<ch;
   ch++;
  }
} 
else{ for(i=k;i<n;i+=k)
      {for(j=0;j<k;j++)
        {cout<<ch;
          ch++;  
        }ch='a';
      }
      ch='a';
      if(n%k==0)
      {for(i=0;i<k;i++)
          {cout<<ch;
            ch++;
          }
      }
      else{ch='a';
            for(i=0;i<n%k;i++)
            {cout<<ch;
            ch++;
              }
    }      }

return 0;
}
