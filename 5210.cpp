#include<bits/stdc++.h>
using namespace std;
   int main()
{int a[10];
int j=0,o=0;
int J,O;
 for(int i=0;i<10;i++)
 {
  cin>>a[i];
  if(a[i]%2==0)
    {
     o++;
     O=a[i];
    }
    else
    {
    j++;
    J=a[i];
    }
 }
 if(o==1)
 cout<<O<<endl;
 else if(j==1)
 cout<<J<<endl;	
}   
