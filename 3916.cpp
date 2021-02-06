#include<bits/stdc++.h>
using namespace std;
int zss(int n,int m)
{
	int N=n;int s=0;
	while(N)
 	{
 	  N=N/10;
	   s=s+1;	
 	}
 	while(s)
 	{
 		if((n%10)==(m%10))
 		 {
 		   n=n/10;
		   m=m/10;		
 		 }
 		 else
 		 break;
    	s=s-1;
 	}
   if(s!=0)
   return 0;
   else
   return 1;	
}
   int main()
{int t;int n;
 cin>>t;
 for(int i=0;i<t;i++)
 {
 	cin>>n;
	 if(zss(n,n*n)==1)
	 cout<<"Yes"<<endl;
	 else
	 cout<<"No"<<endl;
 }
} 
