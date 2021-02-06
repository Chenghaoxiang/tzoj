#include<bits/stdc++.h>
using namespace std;
   int main()
{int t,r,e,c;int i;
  cin>>t;
  for(i=0;i<t;i++)
  {cin>>r>>e>>c;
   if(r>(e-c))
   cout<<"do not advertise"<<endl;
   else if(r<(e-c))
   cout<<"advertise"<<endl;
   else
   cout<<"does not matter"<<endl;
  }
}
