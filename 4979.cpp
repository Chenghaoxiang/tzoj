#include<iostream>
#include<stdio.h>
using namespace std;
int IP(int a,int b)
{
 if(0<a&&a<255)	
 {if(0<b&&b<255)
  return 1;
  else return 0;
 }
 else
 return 0;
}
int deal(int a,int b)
{if(a==1&&b==1)
  return 1;
  else return 0;
}
   int main()
{int a,b,c,d;
 scanf("%d.%d.%d.%d",&a,&b,&c,&d);
    if(deal(IP(a,IP(b,IP(c,d)))))
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
}
