#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
	int i;
	if(n<2)
    return 0;
	for(i=2;i<n;i++)
	if(n%i==0)
    return 0;
	return 1;
}
int main()
{
	int n, i;
	while(cin>>n)
	{
		for(i=n/2;i>=2;i-- )
		if( f(i) && f(n-i))
		{
			cout<<i<<' '<<n-i<<endl;
			break;
		}
	}
}
