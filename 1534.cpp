#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
   int main()
{int num,sum;char a[300];int i;//sum��ͣ�num�ַ������� 
 while(gets(a),a[0]!='#')
 {sum=0;num=strlen(a);
  for(i=0;i<num;i++)
  { 
   if(a[i]==' ')
    sum=sum+0;//���� 
  
  else if('A'<=a[i]&&a[i]<='Z')
  	sum=sum+(i+1)*(a[i]-'A'+1);
  }
  cout<<sum<<endl;
 }
}

