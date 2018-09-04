//https://codeforces.com/contest/579/problem/A

#include <iostream>
using namespace std;
int bac(int x)
{ int count=0;
  while(x>0)
 {  if(x%2==0)
    {x=x/2;
    }
    else 
    { count++;
     x--;
    }
 }
 return count;
   	
}

int main() {

	int x,c;
	cin>>x;
	c=bac(x);
	cout<<c;
	return 0;
}
