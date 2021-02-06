#include<bits/stdc++.h>
using namespace std;
  int main()
{int a,x,n,m;
 while(cin>>a>>x>>n>>m)
 {
 	int num=0;
 	if((a-n*x)<=0)
 	{
 	  if(a%x==0)
 	  {
 	  	a=a-(a/x-1)*x;
 	  	num=(m/a)/10*10;
 	  }
 	  else
 	  {
 	  	a=a-a/x*x;
 	  	num=(m/a)/10*10;
 	  }
	}
	else  
	   {
 	  	a=a-n*x;
 	  	num=(m/a)/10*10;
	   }	
 	cout<<num<<endl;
 } 	
}
