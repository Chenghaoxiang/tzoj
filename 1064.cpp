#include <bits/stdc++.h>
using namespace std;
char A[100001];
int main() {
   while(scanf("%c",&A)!=EOF)
   {
       int a=0,b=0,c=0,d=0;int i;
       for(i=0;i<strlen(A);i++)
       {
           if('0'<=A[i]&&A[i]<='9')
               b++;
          else if('a'<=A[i]&&A[i]<='z'||'A'<=A[i]&&A[i]<='Z')
               a++;
           else if(A[i]==' ')
               c++;
           else
               d++;
       }
       cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
   }
}
