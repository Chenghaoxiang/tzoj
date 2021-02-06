#include<iostream>
#include<stdio.h>
#include<cmath>
#include<string.h>
using namespace std;
     int main()
{int t,n,m;int i,j;int a[100];int min;
  cin>>t;
 for(i=0;i<t;i++)
 {
  cin>>n>>m;
  for(j=1;j<=n;j++)
   {cin>>a[j];}
   min=a[1];
  for(j=1;j<=n;j++)
   {
   if(min>a[j])
    min=a[j];
   }
  cout<<(100-min)*(100-min)<<endl; 
  min=0;memset(a,0,sizeof(a));j=1;
 }
} 
