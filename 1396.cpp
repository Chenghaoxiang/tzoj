#include <stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
/*����˼����ǣ�Ҫ��֪a��b����������Ҫ֪��a��b-1��b-2��
�м���;�� �����*/ 
    int main()
{int a,b;int n;int i;long long x[100];
 memset(x,0,sizeof(x));
    cin>>n;
    x[1]=1;x[2]=2;
    for(i=3;i<100;i++)
	x[i]=x[i-1]+x[i-2]; 
  for(i=0;i<n;i++) 
  {
   cin>>a>>b;
    cout<<x[b-a]<<endl;	
  }		
}
