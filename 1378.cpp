#include<bits/stdc++.h>
int main() 
{//我是真的服了，  
	int sum = 0, n, i, j; 
	int m; 
	while (scanf_s("%d", &n) && n != 0)
	 { 
		for (i = 1; i <= n; i++)
	    {
			scanf_s("%d", &m);
			sum += m / 100 + m % 100 / 50 + m % 100 % 50 / 10 + m % 100 % 50 % 10 / 5 + m % 100 % 50 % 10 % 5 / 2 + m % 100 % 50 % 10 % 5 % 2;
		}
		printf("%d\n", sum);
		sum = 0;
	 }
}
