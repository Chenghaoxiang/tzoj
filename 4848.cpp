#include<bits/stdc++.h>
using namespace std;
long long w[30]={0},v[30]={0},f[40000]={0};
  int main()
{int i,j;int n,m;
 cin>>m>>n;
  for(i=1;i<=n;i++)
   {
   cin>>w[i]>>v[i];
    v[i]*=w[i];
   }
   for(i=1;i<=n;i++)
    for(j=m;j>=w[i];j--)
    { 
	 f[j]=max(f[j],f[j-w[i]]+v[i]);
	}
  cout<<f[m]<<endl; 
} 

