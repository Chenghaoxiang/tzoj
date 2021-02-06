#include<bits/stdc++.h>
using namespace std;
   int main()
{int n,m,sum;int i,k=0;int max;int a[10];
 for(i=0;i<7;i++)//ÆßÌì
 {
  n=0;m=0; 
  cin>>n>>m;
  a[i]=n+m;
  
 }
 max=a[0];
  for(i=0;i<7;i++)//ÆßÌì
 {
if(max<a[i])
  max=a[i];	
 }
 for(i=0;i<7;i++)//ÆßÌì
 {if(max==a[i]&&max>8)
   {
   cout<<i+1<<endl;
    k++;
    break;
   }
 }
 if(k==0)
 cout<<0<<endl;
}
