#include <stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
/*核心思想就是，要得知a到b的种数，就要知道a到b-1和b-2的
有几种途径 并相加*/ 
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
