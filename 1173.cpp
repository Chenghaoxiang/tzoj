#include<bits/stdc++.h>
using namespace std;
   int main()
{long long n;int a[15];
int i=0;
 cin>>n;
  while(n)
  {
  	a[i]=n%10;
  	n=n/10;
  	i++;
  }	
  cout<<a[i-1];
  for(int j=i-2;j>=0;j--)
  cout<<' '<<a[j];
} 
