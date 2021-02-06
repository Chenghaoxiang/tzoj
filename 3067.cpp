#include<bits/stdc++.h>
using namespace std;
   int main()
{int t;int a,b;
 cin>>t;
  for(int i=0;i<t;i++)
  {
  	cin>>a>>b;
  	if(a>b)
  	cout<<a<<endl;
  	else if(b>a)
  	cout<<b<<endl;
  	else 
  	cout<<"These numbers are equal."<<endl;
  }	
} 
