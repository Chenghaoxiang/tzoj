#include <stdio.h>
int V;//������� 
int n;//���� 
int a[31];  //�����Ʒ����� 
int dp[20001]={0};  //dp[i]��ʾ�����ݻ�Ϊiʱ�ɷ������Ʒ����� ��ע��Ҫ��ʼ��Ϊ0 

int main ()
{
    int i,j;
    int t;
	scanf("%d",&V);
	scanf("%d",&n);
    
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)//��ѭ��������ÿ������ 
	{
		for(j=V;j>=a[i];j--)//��ѭ��������ÿ���ݻ� 
		{
			if(dp[j]>( dp[j-a[i]]+a[i] ))
			   dp[j]=dp[j];
			else
				dp[j]=dp[j-a[i]]+a[i];  //ȡ���ֵ�����Ž� 
			
		}
	}	
    printf("%d",V-dp[V]);  //�����С���ݻ� 
    return 0;
}
