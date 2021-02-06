#include<bits/stdc++.h>
using namespace std;
   int main()
{int t;int n;int f[130];
  int i;
  f[1]=1;f[2]=1;f[3]=1;f[4]=3;
  for(i=5;i<120;i++)
   f[i]=(f[i-1]+f[i-3]*2)%1000000;
   cin>>t;
  for(i=0;i<t;i++)
 {
  cin>>n;
  cout<<f[n]<<endl;	
 }
} 
