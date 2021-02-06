#include <stdio.h>
int V;//箱子体积 
int n;//个数 
int a[31];  //存放物品的体积 
int dp[20001]={0};  //dp[i]表示箱子容积为i时可放入的物品的体积 ，注意要初始化为0 

int main ()
{
    int i,j;
    int t;
	scanf("%d",&V);
	scanf("%d",&n);
    
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)//外循环，遍历每个箱子 
	{
		for(j=V;j>=a[i];j--)//内循环，遍历每个容积 
		{
			if(dp[j]>( dp[j-a[i]]+a[i] ))
			   dp[j]=dp[j];
			else
				dp[j]=dp[j-a[i]]+a[i];  //取最大值，最优解 
			
		}
	}	
    printf("%d",V-dp[V]);  //输出最小的容积 
    return 0;
}
