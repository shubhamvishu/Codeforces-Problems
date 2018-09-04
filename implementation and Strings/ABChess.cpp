//https://codeforces.com/contest/519/problem/A

#include <iostream>
using namespace std;

int main() {
	
	int n,w=0,b=0;
	char a;
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			cin>>a;
			//cout<<a;
			if(islower(a) && a!='.')
			{   //cout<<a;
				switch(a)
				{
					case 'q':b+=9;break;
					case 'r':b+=5;break;
					case 'b':b+=3;break;
					case 'n':b+=3;break;
					case 'p':b+=1;break;
					case 'k':b+=0;break;
				}
				//cout<<b;
			}
			else if(isupper(a) && a!='.')
			{    //cout<<a;
			  	switch(a)
				{
					case 'Q':w+=9;break;
					case 'R':w+=5;break;
					case 'B':w+=3;break;
					case 'N':w+=3;break;
					case 'P':w+=1;break;
					case 'K':w+=0;break;
				}
				//cout<<w;
			} 
		}
	}
	if(b>w) cout<<"Black";
	else if(w>b) cout<<"White";
	else cout<<"Draw";
	return 0;
}
