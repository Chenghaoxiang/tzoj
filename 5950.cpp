#include<stdio.h>
#include<string.h> 
#define times 1000
double num[30];int d[30];int dp[3000000]; 
int maxM(int a, int b)	
{
return a>b?a:b;
}
int main()
 {
	double Q,ans;
	int N,k;
    while(scanf("%lf %d",&Q,&N)!=EOF && N!=0)//Q���ŷ�Ʊ��ѭ��������Nѭ���ִ���  
	{
        int i, j, m;
        k=0; //���Ա����ķ�Ʊ��
        for(i=0; i<N; i++){
            scanf("%d",&m);
            double total=0; //���ŷ�Ʊ���ܶ�
            bool flag=true; //��־��Ʊ�Ƿ���� 
            for(j=0;j<m;j++){
                char c;
                double temp;
                scanf(" %c:%lf",&c,&temp);
                if(flag&&(c=='A'||c=='B'||c=='C')&&temp<=600)
					total+=temp;
                else 
					flag=false;         
            }
            if(flag && total<=1000){
                num[k++]=total;
            }         
        }
        for(i=0;i<k;i++)
            d[i]=num[i]*times;
        int q=Q*times; //��С��ת��Ϊ����������Ϊ0-1��������
        memset(dp,0,sizeof(dp)); //dp��ʼ��	
		ans=0; //��������ʼ��
		for(i=0;i<k;i++)
		 {
			for(j=q;j>=d[i];j--) 
			{
				dp[j]=maxM(dp[j],dp[j-d[i]]+d[i]); //������ʽ
				ans=maxM(ans,dp[j]);
			}
		}
        ans/=times; //��ԭΪ����
        printf("%.2lf\n",ans);
    }
 
    return 0;
}
