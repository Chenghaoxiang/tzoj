#include<bits/stdc++.h>
using namespace std;
  int main()
{int n;int i;int num;
 while(cin>>n)
{ num=0;
  if(n==1)
  num=2;
 while(n!=1)
 { if(n%2==0)
   {
    n=n/2;
    num++;
   }
   else
   {
    n=(3*n+1)/2;
	num++;
   }
 }
 cout<<num<<endl;
 }
}
