#include<iostream>
#include<stdio.h>
using namespace std;
   int main()
{int t,i;int l,m,n;int sum;
 cin>>t;
  for(i=0;i<t;i++)
  {sum=0;
   cin>>l>>m>>n;
   sum=sum+l+m*n;
   cout<<sum<<endl;
  }
}
