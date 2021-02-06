/*#include<bits/stdc++.h>
using namespce std;
   int main()
{int a,b,c,d,e,f;int i;
  cin>>a>>b>>c>>d>>e>>f;
  for(i=0;i<)	
}*/
#include <bits/stdc++.h>
using namespace std;
int v[1010];
int main(){
    int a,b,c,d,e,f,ans=0;
    cin>>a>>b>>c>>d>>e>>f;
    for(int i=0;i<=a;i++)
    for(int j=0;j<=b;j++)
    for(int k=0;k<=c;k++)
    for(int l=0;l<=d;l++)
    for(int m=0;m<=e;m++)
    for(int n=0;n<=f;n++)
        v[i+j*2+k*3+l*5+m*10+n*20]=1;
    for(int i=1;i<=1000;i++)
        if(v[i])ans++;
    printf("Total=%d",ans);
    return 0;
}

