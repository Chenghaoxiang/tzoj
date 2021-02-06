#include<iostream>
using namespace std;
   int main()
{ int n;int a[100][100];int i,j,sum;
   cin>>n;sum=0;
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {cin>>a[i][j];}  
 for(i=0;i<n;i++)
  for(j=0;j<=i;j++)
  {sum=sum+a[i][j];} 
  cout<<sum<<endl;
} 
