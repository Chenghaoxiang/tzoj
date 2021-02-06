#include<iostream>
#include<stdio.h>
using namespace std;
    int main()
{int n;int a[100];
 a[1]=1;a[2]=2;
 for(int i=3;i<100;i++)
  a[i]=a[i-1]+a[i-2];
 while(cin>>n)
 {
  if(n!=0)	
  {cout<<a[n]<<endl;
  }
  else break;
 }	
} 
