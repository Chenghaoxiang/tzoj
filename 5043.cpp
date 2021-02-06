#include<bits/stdc++.h>
using namespace std;
   int main()
{int i,j;int N;
 double n,m;
 char a;
  cin>>n>>a;
  m=n/2.0;
  if((m-(double)((int)m))>=0.5)
   N=(int)m+1;
  else
   N=(int)m;  
  for(i=0;i<N;i++)
  {int k=0;
   for(j=0;j<n;j++)
   {
  	if(i==0||i==N-1)
  	cout<<a;
  	else
  	{
	  if(k==0||k==(n-2))
	  cout<<a;
      cout<<' '; 
	  k++;		
  	}
   }
   cout<<endl;
  }
} 
