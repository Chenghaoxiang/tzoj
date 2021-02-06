#include<iostream>
#include<stdio.h>
using namespace std;
int a[10000];
void deal(int n)
{  int len,t,flag,i,j;
 a[0]=1;
 if(n==0)	
 cout<<1<<endl;
 else
 {len=1;
  for(i=1;i<=n;i++)	
  {flag=0;
    for(j=0;j<len;j++)
   { t=i*a[j];
    a[j]=(t+flag)%10;
    flag=(t+flag)/10;
   }	
    while(flag!=0)  	
   {a[j]=flag%10;
    j++;len++;
    flag=flag/10;
   }
  }
 for(i=len-1;i>=0;i--)
   cout<<a[i];
   cout<<endl;
 }
}
void md()
{int n;
 while(cin>>n&&n>=0)
 deal(n);
}
   int main()
{ md();
}
