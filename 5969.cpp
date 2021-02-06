#include<bits/stdc++.h>
using namespace std;
   int main()
{int t;int a[200],b[200];
 int sum=0;
  cin>>t;
  for(int i=0;i<t;i++)
   {cin>>a[i];} 
   for(int j=0;j<t;j++)
   {cin>>b[j];}
  for(int i=0;i<t;i++)
  {
    sum=sum+a[i]*b[i];	
  }   
  cout<<sum<<endl;
}
