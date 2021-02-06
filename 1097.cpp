#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
    int main()
{  int n;int i,j,t;int a[100][100]; int b;
  cin>>n;b=1;
  for(i=0;i<n;i++)//循环输入矩阵 
  	for(j=0;j<n;j++)
  	{cin>>a[i][j];}
  for(i=0;i<n;i++) 
  	for(j=0;j<n;j++)
  	{t=a[i][j];a[i][j]=a[j][i];a[j][i]=t;t=0;}
  	cout<<a[0][0];
  for(i=0;i<n;i++)//循环输出 
  {
  	for(j=1;j<n;j++)
  	{cout<<" "<<a[i][j];
	 b=b+1; 
	  if(b%n==0)  cout<<endl;
	}
  }
} 
