#include<bits/stdc++.h>
using namespace std;
   int main() 
{int n;int m;
 int a[1001],b[1001];
 int t=0;int i;
 int k=1;
	cin>>n;
  for(i=1;i<=n;i++)
  {cin>>a[i];}	
    cin>>m;
  for(i=1;i<=m;i++)
 {b[i]=a[n-m+i];}
  for(int j=m+1;j<=n;j++)
  {
  	b[j]=a[k];
  	k++;
  }
    cout<<b[1];
  for(int i=2;i<=n;i++)
  {cout<<' '<<b[i];}  
}
