#include<iostream>
#include<stdio.h>
using namespace std;
int A[10005];int B[10005];
  int main()
{ int t;
  cin>>t;
    for(int k=0;k<t;k++)
   { int a=0,b=0;int sum1=0,sum2=0; //之前的测试输出一直没撤，我还以为哪错了呢
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {scanf("%d",&A[i]);sum1=sum1+A[i];}
    scanf("%d",&b);
    for(int j=0;j<b;j++)
    {scanf("%d",&B[j]);sum2=sum2+B[j];}
      if(sum1>sum2)
      cout<<"YuYu"<<endl;
      else if(sum1<sum2)
      cout<<"KangKang"<<endl;
      else
      cout<<"Same"<<endl;
   }
}
