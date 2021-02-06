#include<bits/stdc++.h>
using namespace std;
  int main()
{int n;int i;
 int a,b,c,d;//喊，划 
 int m1=0,m2=0; 
  cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>a>>b>>c>>d;//先喊再划 
  if(b==(a+c))
   m1++;
  if(d==(a+c))
   m2++; 
   if(b==(a+c)&&b==d)
   {
    m1--;
    m2--;
   }
 } 	
 cout<<m2<<" "<<m1<<endl;
} 
