#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
   int main()
{int t,n;int i;char a;int num;
   cin>>t;
 for(i=0;i<t;i++)	
  {cin>>a>>n;
  	if('a'<=a&&a<='z')
  	num=((int)a-96)*-1;
  	if(a>='A'&&a<='Z')
  	num=(int)a-64;
  cout<<n+num<<endl;	
  }		
} 
