#include <bits/stdc++.h>
using namespace std;
   int main ()
{int t,n,m;int sum;int i,j;
 cin>>t;
 for(i=0;i<t;i++)
 {
  sum=0;	
  cin>>n;
  for(j=0;j<n;j++)
  {
   cin>>m;
   if(m>6000)
   sum++;	
  }
  cout<<sum<<endl;	
 }
}
