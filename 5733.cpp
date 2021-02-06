#include<bits/stdc++.h>
using namespace std;
int w[2000],v[2000],f[2000];
   int main()
{int i,j,n,m;
  cin>>m>>n;
  for(i=1;i<=n;i++)
   cin>>v[i]>>w[i];
  for(i=1;i<=n;i++)
   for(j=1;j<=m;j++)
   {if(j>w[i])
    f[j]=max(f[j],f[j-w[i]]+v[i]);
    else
    f[j]=f[j];
   }
   cout<<f[m]<<endl;
}
