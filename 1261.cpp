#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    bool a[150];
    cin>>t;
   for(int l=0;l<t;l++)
    {
        int n;
        cin>>n;
        memset(a,0,sizeof(a));
        for(int i=2; i<=n; i++)
            for(int j=1;j<=n;j++)
                if(j%i==0)
                    a[j]=!a[j];//给他赋上相反的真假值 
        int sum=0;
        for(int k=1; k<=n;k++)
            if(!a[k])
                sum++;
        printf("%d\n",sum);
    }
}

