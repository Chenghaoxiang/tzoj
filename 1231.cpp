#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
    int main()
{double x,y=0;int i=0,j,n;char a[100];memset(a,0,sizeof(a));
  while(cin>>n)
  {if(n!=1&&n!=2)
  {  if(n!=0)
   {
    while(n!=1)
    {if(n%2==0)
   	 a[i]='0';
   	 else
   	 a[i]='1';
   	 n=n/2;
   	 i++;
    }
    a[i+1]='\0';
    strrev(a);
   }	 	
  else break;
  for(j=i;j>=0;j--)
  if(a[j]=='1')
   {x=j;break;}	
   y=pow(2,i-x-1);
   cout<<y<<endl;
  memset(a,0,sizeof(a));i=0;n=0;y=0;	
  }	
  else if(n==1)  cout<<1<<endl;
  else cout<<0<<endl;
 }
} 
