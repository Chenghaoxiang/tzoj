#include<iostream>
#include<stdio.h>
#include<cmath>
  int main()
{int t;double n;//核心思路:M(位数)=log10(n!);
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
  	double num=0;
  	scanf("%lf",&n);
  	for(int j=1;j<=n;j++)
  	num=num+log10(j);
  	printf("%d\n",(int)num+1);
  }	
}