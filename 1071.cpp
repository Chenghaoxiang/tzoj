#include<bits/stdc++.h>
using namespace std;
   int main()
{int year,month,days;
 int sum;
 int a[1001];
 char e,f;
a[1]=31,a[2]=28,a[3]=31,a[4]=30,a[5]=31,a[6]=30,a[7]=31,a[8]=31,a[9]=30,a[10]=31,a[11]=30,a[12]=31;
 while(cin>>year>>e>>month>>f>>days)
 {
 	 sum=0;
 	 if(year%4==0&&year%100!=0||year%400==0)
	   a[2]=29;
	  else
	  a[2]=28;
	  for(int i=1;i<month;i++) 
	  sum=sum+a[i]; 
 	cout<<sum+days<<endl;
 }	
}
