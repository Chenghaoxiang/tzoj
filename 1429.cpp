#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
   int main()
{int i,t;int a,b;int num;
   cin>>t;
  for(i=0;i<t;i++)
  {
   cin>>a>>b;
   num=a+b;
   num=num%100;
   cout<<num<<endl;
  }	
} 
