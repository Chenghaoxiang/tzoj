#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
   int main()
{const int CLK_TCK = 100;
long long a,b,c;
 int h=0,m=0,s=0;
  cin>>a>>b;
  c=(b-a)/CLK_TCK;
  if((b-a)%CLK_TCK>=0)
  {
  	c=c+1;
  }
  h=c/3600;
  m=(c/60)%60;
  s=c%60;
  	printf("%02d:",h);
printf("%02d:", m);
printf("%02d", s);
return 0;
}
