#include <bits/stdc++.h>
using namespace std;
/*��ʵ���ǰѺ���Ĳ������Ӻ�
��ȥ��K-1���õ������õĵ����ĸ��� 
���·ûը������*/ 
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

