#include<bits/stdc++.h>
using namespace std;
   int main()
{int n;int c[10001];int d[10001];
 while(cin>>n)
 {
 	int k=0;int l=0;int z=0;int a=0;
 	for(int i=5;i<n;i++)
 	{
 	  for(int j=2;j<i;j++)
	   {
		if(i%j==0)
	   	k++;
	   }
	  if(k==0)
	  {
	   c[l]=i;
	   l++;
	  }
	 } 
     for(int x=0;x<l;x++)
	  for(int y=x+1;y<l;y++)
	  {
	  	if((c[x]+c[y])==n)
	  	 {
	  	 	d[z]=c[y]-c[x];
	  	 	z++;
	  	 }
	  }
	  int min=d[0];	
    for(a=0;a<z;a++)
	{
	 if(d[a]<min)
	  min=d[a];	
	}
	for(a=0;a<z;a++)
	{
		if(d[a]==min)
		 break;
    }
   cout<<n-((n+d[a])/2)<<(n+d[a])/2<<endl;
 }
}
