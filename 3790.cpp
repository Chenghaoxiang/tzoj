#include<iostream>
#include<stdio.h>
using namespace std;
  int main()
{int t;int i;int p,pa,pb;
 cin>>t;
  for(i=0;i<t;i++)
  {cin>>p>>pa>>pb;
   if((p-pa)<(p-pb))
   cout<<'A'<<endl;
   else
   cout<<'B'<<endl;
  }	
}
