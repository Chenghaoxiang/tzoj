#include<bits/stdc++.h>
using namespace std;
int main()
{int x[3],y[3];//没办法，必须要用数组 
double a,b,c;
double MIN,MAX;
 for(int i=0;i<3;i++)
  cin>>x[i]>>y[i];
a=sqrt(abs((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1])));
b=sqrt(abs((x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2])));
c=sqrt(abs((x[2]-x[0])*(x[2]-x[0])+(y[0]-y[2])*(y[0]-y[2])));
 MIN=min(min(a,b),c);
 MAX=max(max(a,b),c);
printf("%.2lf %.2lf",MIN,MAX);
}
