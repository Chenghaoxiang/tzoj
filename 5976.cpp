#include<bits/stdc++.h>
using namespace std;
   int main()
{int t;int a[1001];
int x,y;int sum=0;
   cin>>t;
   for(int i=0;i<t;i++)
   {cin>>a[i];}	
   cin>>x>>y;
   for(int i=x-1;i<=y-1;i++)
   {	
     if(a[i]%2!=0)
      sum=sum+a[i];;
   }
   cout<<sum<<endl;
}
