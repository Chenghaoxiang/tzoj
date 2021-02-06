#include<iostream>
using namespace std;
  int main()
{ int n,x,y;int num=0;
  cin>>n>>x>>y;
  if(y%x==0)//先得出虫子吃掉的总数 
  num=y/x;
  else
  num=y/x+1;
  if(n>=num)
  cout<<n-num<<endl;
  else
  cout<<0<<endl; 
}