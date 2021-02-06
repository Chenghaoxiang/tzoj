#include<bits/stdc++.h>
using namespace std;
   int main()
{char a[100],b[100],f[100];
 int i=0,j=0,k=0,n=0;
 gets(a);
 gets(b);   
 for(int k=0;k<strlen(a);k++)
  {
  for(int l=0;l<strlen(b);l++)
   {
 	if(a[k]==b[l])
	 {break;} 
	else
	{f[n]=a[k];}
   }
    n++;
  }
  for(i=0;i<n;i++)
   cout<<f[i];	
   cout<<endl;
}
