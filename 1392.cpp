#include<bits/stdc++.h>
using namespace std;
    int main()
{int t,a,b,c;int i,j;
 cin>>t;
 for(i=0;i<t;i++)
 {cin>>a>>b>>c;
  if((a+b)>c&&(a+c)>b&&(b+c)>a)
  {
  if(abs(a-b)<c&&abs(a-c)<b&&abs(b-c)<a)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
  }
  else
  cout<<"NO"<<endl;
 }
}
