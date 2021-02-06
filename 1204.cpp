#include<bits/stdc++.h>
using namespace std;
    int main()
{int i;double sum,num;
  cout<<"n e"<<endl;
cout<<"- -----------"<<endl;
 for(i=0;i<=9;i++)
 { sum=0;num=1;
  for(int j=0;j<=i;j++)
  {
   if(j==0)
   sum=1;
   else
   {
   sum=sum+(double)(1.0/(num*j));
   num=num*j;
   }
  }
  if(i==0)
  cout<<"0 1"<<endl;
  else if(i==1)
  cout<<"1 2"<<endl;
  else if(i==2)
  cout<<"2 2.5"<<endl;
  else
  printf("%d %.9lf\n",i,sum);
 }	
}
 

