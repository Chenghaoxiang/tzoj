#include<bits/stdc++.h>
using namespace std;
  int main()
{int t,x,n;
 int i,j;
 int y,num;//num位为计数器 
  cin>>t;
 for(i=0;i<t;i++)
 { 
  num=0;
  cin>>y>>n;
  if((y%4==0&&y%100!=0)||(y%400==0))
    num=1;
  while(num!=n)
  {	
   y++;
 if((y%4==0&&y%100!=0)||(y%400==0))
    num++;	
  }	
  cout<<y<<endl;
 }	
} 
