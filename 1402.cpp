#include<iostream>
#include<stdio.h>
#include<cmath>
#include<string.h>
using namespace std;
  int main()
{int a,b;int x[100];int i=1;
	while(cin>>a)
	{
	 if(a==1) cout<<1<<endl;
	 else
	 {
	 while(a!=1)
	  {
	  x[i]=a%2;
	  a=a/2;	
	  i++;
	  }
	 cout<<1;	
	  for(int j=i-1;j>=1;j--)
	   cout<<x[j];
	  cout<<endl;
	  memset(x,0,sizeof(x));i=1;
     }
	}	
} 
