#include<iostream>
#include<stdio.h>
using namespace std;
   int main()
{int h,m;
cin>>h>>m;
  if(m<45)
  {
  if(h==0)
  h=24;
  h=h-1;
  m=m+60-45;
  }
  else
  {
   h=h;
   m=m-45;
  }
  cout<<h<<' '<<m<<endl;
}
