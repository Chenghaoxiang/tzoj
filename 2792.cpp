#include<bits/stdc++.h>
using namespace std;
#define Pi 3.1415926
   int main()
{double n;
 while(cin>>n)
 {
 	if(n>1||n<-1.00)
 	cout<<"error"<<endl;
 	else
  printf("%.1lf\n",acos(n)/Pi*180.0);	
 }
}
