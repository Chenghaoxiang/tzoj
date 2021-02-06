#include <bits/stdc++.h>
using namespace std;
int a[105];
int main() {
     int t;
    while(cin>>t&&t!=0)
    {
        int i,j;
        for(i=0;i<t;i++)
            cin>>a[i];
        for(i=1;i<t;i++)
            for(j=t-1;j>=i;j--)
           if(abs(a[j-1])<abs(a[j]))
               swap(a[j],a[j-1]);
        cout<<a[0];
        for(i=1;i<t;i++)
            cout<<" "<<a[i];
        cout<<endl;
    }
    return 0;
}
