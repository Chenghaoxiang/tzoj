#include<bits/stdc++.h>
using namespace std;
   int main()
{int t;
int a[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
int b[15];
int i,j;
int l=0;
  cin>>t;
  for(i=0;i<t;i++)
  {cin>>b[i];} 
  for(i=0;i<13;i++)
  {
  	 int k=0;
    for(j=0;j<t;j++)
   {
   	 if(a[i]==b[j])
   	 {
   	  k++;
     }
   }
   if(k==0)
    {
    if(l==0)
     cout<<a[i];
    else
     cout<<" "<<a[i];
     l++;
    }
  }
  cout<<endl;	
} 
