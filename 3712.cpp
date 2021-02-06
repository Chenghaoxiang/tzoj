#include<bits/stdc++.h>
using namespace std;
  int main()
{int a,b,c;
 int F=0,R=0,B=0,N=0; 
  cin>>a>>b>>c;
  if(a==1&&b==1)
   B=1;
  else if(a==0&&b==0)
  N=1;
  else if(a==1&&b==0)
  F=1;
  else 
  R=1;
  if(c==0)
  {
  	if(F==1)   c=1;
  	else      c=0;
  } 
  else
  {
  	if(N==1)   c=0;
  	else       c=1;
  }
  cout<<c<<endl;
}
