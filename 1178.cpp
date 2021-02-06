#include<bits/stdc++.h>
using namespace std;
int s(char a[],int i)
{
   if(a[i]==' '&&a[i+1]!=' ')
      return 1;
      else
      return 0;
      	
}
   int main()
{char a[101];
   int num=0;
   gets(a);
  for(int i=0;i<strlen(a);i++)
  {
  	if(s(a,i)==1)
  	 num++;
  }	
  cout<<num+1<<endl;
}
