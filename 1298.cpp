#include<stdio.h>
#include <cmath>
#include<iostream>
using namespace std;
/*将数据分成两部分，分别计算再相加*/ 
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

