#include<iostream>
#include<stdio.h>
using namespace std;
   int main()
{ __int64 n,m;
 while(~scanf("%I64X %I64X",&n,&m))//�������ļ���β�� 
 { if(m+n>=0) 
  printf("%I64X\n",n+m);
  else
  printf("-%I64X\n",-(m+n));
 }
}
