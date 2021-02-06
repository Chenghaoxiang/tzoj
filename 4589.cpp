#include<bits/stdc++.h>
using namespace std;
    int main ()
{int n;int k;
 while(scanf("%d",&n)!=EOF)
 {
 	k=0;
   for(int i=2;i<n;i++)
   {
   	if(n%i==0)
   	  k++;
   }	
   if(k==0)
   cout<<"Yes"<<endl;
   else
   cout<<"No"<<endl;
 }
}
