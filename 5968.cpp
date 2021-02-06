#include<bits/stdc++.h>
using namespace std;
   int main()
{int t,n;int a[101];int sum=0;
     cin>>t;
  for(int i=0;i<t;i++)
  {scanf("%d",&a[i]);}	
   cin>>n;
   for(int i=0;i<n;i++)
   {
   	 sum+=a[i];
   }
   cout<<sum<<endl;
}
