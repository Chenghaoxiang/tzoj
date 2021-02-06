#include<iostream>
#include<stdio.h> 
using namespace std;
   int main()
{int t;
  cin>>t;
 for(int i=1;i<=t;i++) 
  {
  	int n;
	cin>>n;
	cout<<"Case #"<<i<<": "<<(n/100)*100<<endl;
  }	
}
