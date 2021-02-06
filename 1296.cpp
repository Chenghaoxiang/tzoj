#include<iostream>
#include<stdio.h> 
using namespace std; 
  int main()
{int N;int b;int num,i;
 while(cin>>N)
 {
  b=2*N+1;
  for(i=1,num=1;;i++)	
  {
  num=(num*2)%b;	
  if(num==1)
  {cout<<i<<endl;break;}	
  }
  b=0;i=1;num=1;
 }
}

