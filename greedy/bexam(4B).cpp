//http://codeforces.com/problemset/problem/4/B

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int min[30],max[30],d,sum,maxsum=0,minsum=0;
	cin>>d>>sum;
	for(int i=0;i<d;i++)
	{ cin>>min[i]>>max[i];
	  maxsum+=max[i];
	  minsum+=min[i];
	}

	if(maxsum>=sum && minsum<=sum && sum!=0)
	{     
		for(int i=d-1;i>=0;i--)
		{    
	                   if(maxsum-(max[i]-min[i])>sum)
		       { maxsum-=(max[i]-min[i]);
		       	max[i]=min[i];
		       }
		        else{
			while(max[i]>=min[i] && max[i]>0)
			{ 
				
				if(maxsum==sum)
				{           cout<<"YES"<<endl;
					for(int k=0;k<d;k++)
					cout<<max[k]<<" ";
					exit(0);
				}
				if(max[i]>min[i])
			    {max[i]--;
				maxsum--;}
			    
			}
		         }
		}
	}
	else if(sum==0 && maxsum==0){cout<<"YES"<<endl;for(int i=0;i<d;i++){cout<<"0"<<endl;}}
            else{cout<<"NO";}	
	return 0;
}
