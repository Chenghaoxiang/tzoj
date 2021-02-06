#include<bits/stdc++.h>
using namespace std;
  int main()
{int a,b,c,d;
 int s[4];
 int min,m,max;
 cin>>a>>b>>c>>d;
 s[0]=a;s[1]=b;
 s[2]=c;s[3]=d;
 min=s[0];m=s[0];max=s[0];
 for(int i=0;i<4;i++) 
  {
  	if(min>s[i])
  	min=s[i];
  	if(s[i]>max)
  	max=s[i];
  }	
  for(int j=0;j<4;j++)
  {
  	if(s[j]>m&&s[j]!=max)
  	m=s[j];
  }
  cout<<min*m<<endl;
}
