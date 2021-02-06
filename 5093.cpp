#include <bits/stdc++.h>
using namespace std;
int f[10101];
int w[10101],v[10101];
  int main()
{int n,m;int i,j;
  cin>>m>>n;
 for(i=1;i<=n;i++)
 cin>>v[i]>>w[i];
 for(i=1;i<=n;i++)
  for(j=w[i];j<=m;j++)
  f[j]=max(f[j],f[j-w[i]]+v[i]);
  cout<<f[m]<<endl;
}
