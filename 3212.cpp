#include<bits/stdc++.h>
using namespace std;
   int main()
{int t;int n;char a[10001];
  int j;int num;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  	 num=0;
  	cin>>n;
  	for(j=0;j<n;j++)
  	{cin>>a[j];}
    for(j=0;j<n;j++)
    {
       if(a[j]=='p'&&a[j+1]=='i'&&a[j+2]=='g')
	    	num++;
    }
    cout<<num<<endl;
  }
} 
