#include<bits/stdc++.h>
using namespace std;
double w[50];int v[50],f[3000000];
#define times 1000
  int main()
{int n,k;//n���ŷ�Ʊ��ѭ��������tѭ���ִ��� 
double m,ans;//m�ܽ�� 
 while(scanf("%lf %d",&m,&n)!=EOF&&n!=0)
 { int k=0;int i,j,t;
 	for(i=0;i<n;i++)  
   {scanf("%d",&t);bool flag=true;//��־��Ʊ�Ƿ���� 
    double total=0;//���ŷ�Ʊ���Ա������ܶ 
    char c;double temp;//c����Ĵ�д��ĸ,temp�ֽ�� 
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
  v[i]=w[i]*times;//���ֲ��Ľ���
   int q=m*times;//�ܽ��Ҳͬ����100�� 
  memset(f,0,sizeof(f));
  ans=0;
   for(i=0;i<k;i++)
   {for(j=q;j>=v[i];j--)
    {if(f[j]<f[j-v[i]]+v[i])
   	  f[j]=f[j-v[i]]+v[i];
   	  else 
   	  f[j]=f[j];
   	 if(ans<f[j])
	   ans=f[j];//��ֵ����ans 
	 else
	 ans=ans;  
    }
   }
   ans/=times;//��ԭ��ȥ
   printf("%.2lf\n",ans); 
 }
}
