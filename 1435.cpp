#include<bits/stdc++.h>
using namespace std;
   int main()
{int n,m;int i,j,k,t;int temp;
int a[19999],b[19999],c[19999];
  while(cin>>n>>m)
 {
   for(i=0;i<n;i++)//���� 
    cin>>a[i];
   for(i=0;i<m;i++)
    cin>>b[i];
    t=0;
   for(i=0;i<n;i++)
    {k=0;
     for(j=0;j<m;j++)
     { 
	 if(a[i]!=b[j])
      k++;
      if(k==m)
      {c[t]=a[i];//�ѵ�һ�����в���b�ظ��ķ��� 
       t++;
      }
     }
    }
    for(i=t,j=0;i<t+m;i++,j++)
    {c[i]=b[j];}//�ٷ���ڶ��� 
  for(i=0;i<t+m;i++)
   for(j=0;j<t+m;j++)//ð������ 
   {if(c[i]<c[j]) 
    {temp=c[j];c[j]=c[i];c[i]=temp;}
   }
   cout<<c[0];
   for(i=1;i<t+m;i++)
    printf(" %d",c[i]);
    printf("\n");
 }
} 
