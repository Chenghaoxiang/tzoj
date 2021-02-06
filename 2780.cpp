#include<bits/stdc++.h>
using namespace std;
  int main()
{   int n;
  int a[1001];
  a[1]=1;
  int sum=0;
  for(int i=2;i<=1001;i++)
  {
  	a[i]=a[i-1]+i;
  }
  cin>>n;
  for(int j=1;j<=n;j++)
   sum+=a[j];
  cout<<sum<<endl;	
}
