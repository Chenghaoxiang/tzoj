
<span style="font-size:18px;"># include<stdio.h>
int fab(int x,int y)
{
	int t,a,b;
	a=x,b=y;
	while(b!=0)
			{
				t=a%b;
				a=b;
				b=t;
			}
			if(a==1)
			return 0;
			else
			return y;
}
int main()
{
	int n,i,a[33000];
	scanf("%d",&n);
	while(n--)
	{
		 int m,t=0;
		scanf("%d",&m);
		for(i=1;i<m;i++)
		{
		a[i]=fab(m,i);	
		}
		for(i=1;i<m;i++)
		if(a[i]==0)
		t++;
		printf("%d\n",t);
	}
}*/</span>

