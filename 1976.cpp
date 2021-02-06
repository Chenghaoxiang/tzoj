#include<iostream>
#include<stdio.h>
using namespace std;
   int main()
{int n,i,c;int l;int w,x,y,z;
 cin>>n;
 for(i=1;i<=n;i++)
 {
  x=0;y=0;z=0;w=0;
  cin>>c;
  w=c/25;
  x=(c-25*w)/10;
  y=(c-25*w-x*10)/5;
  z=(c-25*w-x*10-y*5)/1;
   cout<<i<<" ";
 printf("%d QUARTER(S), %d DIME(S), %d NICKEL(S), %d PENNY(S)\n",w,x,y,z);	
 }
}
