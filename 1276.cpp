#include<bits/stdc++.h>
using namespace std;
  int main()
{int a[1001];
 int i;int num;int n;
 while(cin>>a[0]&&a[0]!=-1)
 {
 	 i=1;num=0;
 	while(scanf("%d",&n)&&n!=0)
 	{
 	 a[i]=n;
	  i++;	
 	}
 	for(int j=0;j<i;j++)
 	 for(int k=0;k<i;k++)
 	 {
 	 	if(a[k]==a[j]*2)
 	 	num++;
 	 }
 	 cout<<num<<endl;
 }	
}
