#include<stdio.h>
#include <cmath>
#include<iostream>
using namespace std;
/*�����ݷֳ������֣��ֱ���������*/ 
   int main()
{int n;int x,y;int sum,num;
 while(cin>>n)
 {
  x=n/2;  
  y=n-x;	
  sum=(x-1)*x/2+(y-1)*y/2;	
 cout<<sum<<endl;	
 }
}

