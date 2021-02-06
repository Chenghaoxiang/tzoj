#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
   int main()
{int t,n;int i,j,k;int a[100][100];int max[100],sum=0;
   cin>>t;
 for(i=0;i<t;i++)
 {
  cin>>n;
  for(j=0;j<n;j++)
   for(k=0;k<=j;k++)
   {cin>>a[j][k];}
  for(j=n-2;j>=0;j--)
   for(k=0;k<=j;k++) 
   {if(a[j+1][k]>a[j+1][k+1])
   	 a[j][k]=a[j][k]+a[j+1][k];
   	 else
   	 a[j][k]=a[j][k]+a[j+1][k+1];
   }
  cout<<a[0][0]<<endl; 
 }  		
} 
