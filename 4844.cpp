#include<bits/stdc++.h>
using namespace std;
#define h 30
  int main()
{ int a[10];int sum=0;int H;
	for(int i=0;i<10;i++)
	{cin>>a[i];}
    cin>>H;
    for(int i=0;i<10;i++)
    {
     if(H+h>=a[i])
	  	sum++;
    }
    cout<<sum<<endl;
}
