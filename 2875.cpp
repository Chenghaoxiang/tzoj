#include<bits/stdc++.h>
using namespace std;
  int main()
{int n,m,x,y;
  while(scanf("%d %d %d %d",&n,&m,&x,&y)!=EOF)
 {
 if(n>m*3)//n/3>m������˶������⳵������£��������Ҫ������Σ��ֵ���Ǿ��������õ��������Ч�� 
  cout<<"ERROR"<<endl;
  else
  {
  	if(y>n) break;
  	if(y>m/5) y=m/5;//���y�����������Σ��ֵ�ڿ����ﵥ����������Ҫ�࣬�Ͱ�������y
	 while(y&&(n-y)/3+((n-y)%3?1:0)/*���⳵������*/+y*5>m)
	   y--;
	 if((n-y)%3==0)  cout<<(n-y)/3*x<<endl;
	 if((n-y)%3!=0)  cout<<((n-y)/3+1)*x<<endl;    
  }
 }
}
