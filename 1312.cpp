#include<bits/stdc++.h>
using namespace std;
   int main()
{int n,u,d;int yu,num;
 while(cin>>n>>u>>d&&n!=0)
 {int time,l;
 time=0;l=0;
  while(l<n) 
  {
   time++;
   	l=l+u;
   	if(l>=n)
   	break;
   	l=l-d;
   	time++;
  }
  printf("%d\n",time);
 }
} 
