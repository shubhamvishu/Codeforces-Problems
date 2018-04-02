//http://codeforces.com/problemset/problem/3/A

#include <iostream>
#include<math.h>
using namespace std;

int main() {
   int n=2,i=0,k,rd=0,ru=0,ld=0,lu=0,a1,a2,b1,b2;
   string s[2];
   while(n)
   {
      cin>>s[i];
      i++;
      n--;
   }
   a1=s[0][0];
   a2=s[1][0];
   b1=s[0][1];
   b2=s[1][1];
   
if(a1<a2)
{ //RIGHT
  
   if(b1>b2)
   {
   	//right down
   	k=0;rd=0;
   	 while(a1!=a2 && b1!=b2)
   	 {
   	      a1++;
		  b1--;
		  rd++;	
		  
	 }
	  	if(a1==a2)
	    {
	 	int d=b1-b2;
	 	cout<<rd+d<<endl;
	 	while(rd)
	 	{
	 		cout<<"RD"<<endl;rd--;
		 }
		 while(d)
		 {cout<<"D"<<endl;d--;
		 }
	    }
	 
	  else{
	  	int d=a2-a1;
	  	cout<<rd+d<<endl;
	 	while(rd)
	 	{
	 		cout<<"RD"<<endl;rd--;
		 }
		 while(d)
		 {cout<<"R"<<endl;d--;
		 }
	  }
   
   }
   
   
   
   else if(b1<b2)
   {
   	//right up
   	k=0;ru=0;
   	     while(a1!=a2 && b1!=b2)
   	    {
   	      a1++;
		  b1++;
		  ru++;	
		  
	    }
	    if(a1==a2)
	    {
	 	int d=b2-b1;
	 	cout<<ru+d<<endl;
	 	while(ru)
	 	{
	 		cout<<"RU"<<endl;ru--;
		 }
		 while(d)
		 {cout<<"U"<<endl;d--;
		 }
		 
	    }
	 
	  else{
	  	int d=a2-a1;
	  	cout<<ru+d<<endl;
	 	while(ru)
	 	{
	 		cout<<"RU"<<endl;ru--;
		 }
		 while(d)
		 {cout<<"R"<<endl;d--;
		 }
	  }
   	
   }
   else{
   	//move right
   	int d=a2-a1;
   	 cout<<d<<endl;
   	 while(d)
   	 {
   	 	cout<<"R"<<endl;d--;
		}
   }
}
//**********right ending*********


else if(a1>a2)
{
	//LEFT
    if(b1>b2)
    {
    	//left down
   	k=0;ld=0;
   	 while(a1!=a2 && b1!=b2)
   	 {
   	      a1--;
		  b1--;
		  ld++;	
		  
	 }
	  	if(a1==a2)
	    {
	 	int d=b1-b2;
	 	cout<<ld+d<<endl;
	 	while(ld)
	 	{
	 		cout<<"LD"<<endl;ld--;
		 }
		 while(d)
		 {cout<<"D"<<endl;d--;
		 }
	    }
	 
	  else{
	  	int d=a1-a2;
	  	cout<<ld+d<<endl;
	 	while(ld)
	 	{
	 		cout<<"LD"<<endl;ld--;
		 }
		 while(d)
		 {cout<<"L"<<endl;d--;
		 }
	  }
    	
	}
	else if(b1<b2)
	{
		//left up
		k=0;lu=0;
   	     while(a1!=a2 && b1!=b2)
   	    {
   	      a1--;
		  b1++;
		  lu++;	
		  
	    }
	    if(a1==a2)
	    {
	 	int d=b2-b1;
	 	cout<<lu+d<<endl;
	 	while(lu)
	 	{
	 		cout<<"LU"<<endl;lu--;
		 }
		 while(d)
		 {cout<<"U"<<endl;d--;
		 }
		 
	    }
	 
	  else{
	  	int d=a1-a2;
	  	cout<<lu+d<<endl;
	 	while(lu)
	 	{
	 		cout<<"LU"<<endl;lu--;
		 }
		 while(d)
		 {cout<<"L"<<endl;d--;
		 }
	  }
	}
	else{
		//move left
		int d=a1-a2;
   	 cout<<d<<endl;
   	 while(d)
   	 {
   	 	cout<<"L"<<endl;d--;
		}
	}
}
//*************LEFT ENDING********************************


else{ 
     int d=b1-b2;
     if(d>0)
     { 
        cout<<d<<endl;
        while(d)
        { cout<<"D"<<endl;d--;
		}
	 }
	 else{
	 	d=abs(d);
	 	cout<<d<<endl;
        while(d)
        { cout<<"U"<<endl;d--;
		}
	 	
	 }
	}

	return 0;
}
