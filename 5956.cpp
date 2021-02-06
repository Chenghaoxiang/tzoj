#include<bits/stdc++.h>
using namespace std;
  int main()
{int a,b;
 int i,k=0;
  cin>>a>>b;
 for(i=a;i<=b;i++)
 {
  if(i%2!=0)
  {
   cout<<i<<endl;
   k++;
  }
 }
 if(k==0)
 cout<<"None"<<endl;
} 
