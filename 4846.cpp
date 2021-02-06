#include<bits/stdc++.h>
using namespace std;
double w[50];int v[50],f[3000000];
#define times 1000
  int main()
{int n,k;//n单张发票总循环次数，t循环分次数 
double m,ans;//m总金额 
 while(scanf("%lf %d",&m,&n)!=EOF&&n!=0)
 { int k=0;int i,j,t;
 	for(i=0;i<n;i++)  
   {scanf("%d",&t);bool flag=true;//标志发票是否可用 
    double total=0;//单张发票可以报销的总额； 
    char c;double temp;//c输入的大写字母,temp分金额 
    for(j=0;j<t;j++)
    {scanf(" %c:%lf",&c,&temp);
     if(flag&&(c=='A'||c=='B'||c=='C')&&temp<=600)
      total+=temp; 
      else
	  flag=false; 
    }
    if(flag&&total<=1000)
     w[k++]=total;
   }
  for(i=0;i<k;i++)
  v[i]=w[i]*times;//将分步的金额化整
   int q=m*times;//总金额也同样乘100； 
  memset(f,0,sizeof(f));
  ans=0;
   for(i=0;i<k;i++)
   {for(j=q;j>=v[i];j--)
    {if(f[j]<f[j-v[i]]+v[i])
   	  f[j]=f[j-v[i]]+v[i];
   	  else 
   	  f[j]=f[j];
   	 if(ans<f[j])
	   ans=f[j];//将值赋给ans 
	 else
	 ans=ans;  
    }
   }
   ans/=times;//还原回去
   printf("%.2lf\n",ans); 
 }
}
