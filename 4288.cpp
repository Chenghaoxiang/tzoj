#include<bits/stdc++.h>
using namespace std;
   int main()
{int t;int i;
  cin>>t;
 for(i=0;i<t;i++)
 {int s,time;double m1=10.0,m2=11.0;
  cin>>s>>time;
  if(s>=3)	
 {
 	if(s>=10)
    {
     m1=m1+(2*7+(s-10)*3*1.0);
	 m2=m2+(17.5+(s-10)*3.75);	
    }	
 	else
 	{
 	 m1=m1+(s-3)*2.0;
	  m2=m2+(s-3)*2.5;	
 	}
 }
  m1+=(1+time*0.4);
        m2+=((time*2.5)/4);
        int x=m1;
        if(m1-x>=0.5)
            x+=1;
        int y=m2;
        if(m2-y>=0.5)
            y+=1;
        printf("%d\n",y-x);
    }
}
