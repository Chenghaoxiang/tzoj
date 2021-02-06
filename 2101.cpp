#include<iostream>
#include<stdio.h>
using namespace std;
   int main()
{float n1,n2;
 cin>>n1; 
 while(cin>>n2&&n2!=999)
 {printf("%.2lf\n",n2-n1);
   n1=n2;
 }
  cout<<"End of Output"<<endl;
}
