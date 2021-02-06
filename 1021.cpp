#include <bits/stdc++.h>
using namespace std;
/*其实就是把后面的插口数相加后
减去（K-1）得到可以用的电器的个数 
这电路没炸就离谱*/ 
int main ()
 {int t;int i,j;
	cin>>t;
	for(i=0;i<t;i++)
    {int k;int a;
		cin>>k;
		int count=0;
		for(j=0;j<k;j++) 
		{
			cin>>a;
			count+=a;
		}
		count-=(k-1);
		cout<<count<<endl;	
	}
}

