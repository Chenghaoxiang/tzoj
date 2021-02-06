#include<bits/stdc++.h>
using namespace std;
  int main()
{int k;int i;double sum=0;
   cin>>k;
  for(i=1;;i++)
  {
  	sum+=1.0/i;
  	if(sum>k)
  	{cout<<i<<endl;break;}
  }	
} 
