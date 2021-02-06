#include<bits/stdc++.h>
using namespace std;
   int main()
{int fu,zero,zs;
 int n;
 double a[1001];
  while(cin>>n&&n!=0)
  {
  	zero=0;fu=0;zs=0;
  	for(int i=0;i<n;i++)
  	{cin>>a[i];}
   for(int i=0;i<n;i++)
   {
   	if(a[i]==0)
   	 zero++;
   	else if(a[i]>0)
   	 zs++;
   	else if(a[i]<0)
   	 fu++;
   }
   cout<<fu<<' '<<zero<<' '<<zs<<endl;	
  }	
} 
