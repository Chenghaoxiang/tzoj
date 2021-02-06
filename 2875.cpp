#include<bits/stdc++.h>
using namespace std;
  int main()
{int n,m,x,y;
  while(scanf("%d %d %d %d",&n,&m,&x,&y)!=EOF)
 {
 if(n>m*3)//n/3>m在最多人都坐出租车的情况下，如果还比要求的最大危险值大，那就做不到得到问题的有效解 
  cout<<"ERROR"<<endl;
  else
  {
  	if(y>n) break;
  	if(y>m/5) y=m/5;//如果y比在最大允许危险值内可以骑单车的人数还要多，就把它赋给y
	 while(y&&(n-y)/3+((n-y)%3?1:0)/*出租车的数量*/+y*5>m)
	   y--;
	 if((n-y)%3==0)  cout<<(n-y)/3*x<<endl;
	 if((n-y)%3!=0)  cout<<((n-y)/3+1)*x<<endl;    
  }
 }
}
