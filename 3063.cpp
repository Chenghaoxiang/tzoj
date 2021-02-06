#include<bits/stdc++.h>
using namespace std;
  int main()
{int t;int n;long long s=0;
 int i,j;
  cin>>t;
 while(cin>>n)
 {
 	for(i=1;i<=n;i++)
 	 for(j=1;j<=i;j++)
 	 {
 	 	s=s+j;
 	 }
 	 cout<<s<<endl;
 	 s=0;
 } 	
}
