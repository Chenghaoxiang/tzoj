#include<bits/stdc++.h>
using namespace std;
  int main()
{int a[1111];
 int i;
 a[1]=1;
  for(i=2;i<1110;i++)
  {
  	a[i]=a[i-1]+i-1;
  }
  int n;
  while(cin>>n)
  {
  	int sum=0;
  	for(i=1;i<=n;i++)
  	{
  	  sum=sum+a[i];	
  	}
  	cout<<sum<<endl;
  }
}
