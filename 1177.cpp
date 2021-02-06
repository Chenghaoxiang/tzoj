#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
   int main()
{int n;int i,j,k;int b=2;
 cin>>n;
 if(n!=1)
{
 for(i=0;i<n-1;i++)
 {cout<<' ';}
 cout<<'1'<<endl;
 for(i=n-2;i>=1;i--)
 {
  for(j=1;j<=i;j++)
  cout<<' ';    
  for(k=1;k<=b;k++)    
   cout<<k;
  for(k=b-1;k>=1;k--)     
    cout<<k;    
   cout<<endl;    
  b++;         
 }
  for(j=1;j<=n;j++)
  cout<<j;
  for(k=n-1;k>=1;k--)
  cout<<k;
  cout<<endl;
  b=b-1;
 /*ÏÂ°ë²¿·Ö*/
 for(i=1;i<=n-2;i++)
 {
  for(j=1;j<=i;j++)
  cout<<' ';    
  for(k=1;k<=b;k++)    
   cout<<k;
  for(k=b-1;k>=1;k--)     
    cout<<k;    
   cout<<endl;    
  b--;         
 }
 for(i=0;i<n-1;i++)
 {cout<<' ';}
 cout<<'1'<<endl;
 }
 else
 cout<<'1'<<endl;
}
