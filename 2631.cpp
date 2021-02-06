#include<bits/stdc++.h>
using namespace std;
   int main()
{int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  	double n,a,b,c,d,e,x,m;
	  cin>>n;
   cin>>a>>b>>c>>d>>e;
	double w,x1,y,z;
	cin>>x>>m;
	w=b;y=d;	
	x1=a*0.01*x*12+(e-n)*x*0.01*12*m;
	z=e+((a-a*0.01*x*12-b-c-d)-a);
	printf("%.2lf %.2lf %.2lf %.2lf\n",w,x1,y,z); 
  }	
}
