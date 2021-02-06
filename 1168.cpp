#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
   int main()
{ int n,i,j,t;int a[20];int max,min,x,y; 
  cin>>n; x=y=1;
  for(i=0;i<n;i++)
   {
   cin>>a[i];
    max=a[0];min=a[0];
    if(max<a[i]) {max=a[i];x=i;}
    if(min>a[i]) {min=a[i];y=i;}
   }
  t=a[x];a[x]=a[n-1];a[n-1]=t; 
  t=a[y];a[y]=a[0];a[0]=t;
  cout<<a[0];
  for(i=1;i<n;i++)
   {cout<<" "<<a[i];}
   cout<<endl;
}
