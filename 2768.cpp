#include<bits/stdc++.h>
using namespace std;
  int main()
{long long a,b,c;long long n=0,m;long long sum;
 while(cin>>a>>b>>c)
 {
   n=a+b;m=0;
  sum=0;
   while(n>=c)
   {
   	m=n%c;
     n=n/c;
    sum=sum+n;
   	n=n+m;
   }
   cout<<sum<<endl;	
 }	
}
