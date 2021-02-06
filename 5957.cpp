#include<bits/stdc++.h>
using namespace std;
   int main()
{int a,b;int k=0;int i=0;
 cin>>a>>b;
  for(int i=b;i>=a;i--)
  {
  	if(i%2==0)
  	{
  	cout<<i<<endl;
  	k++;
    }
  }
   if(k==0)
   cout<<"None"<<endl;	
}
