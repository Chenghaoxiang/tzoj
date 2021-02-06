#include<bits/stdc++.h>
using namespace std;
  int main()
{int s[3];
  while(cin>>s[0]>>s[1]>>s[2])	
  {
   if(s[0]==0&&s[1]==0&&s[2]==0)
        break;
  	sort(s,s+3);
  	  if((s[0]*s[0]+s[1]*s[1])==s[2]*s[2])
		cout<<"right"<<endl;
	  else
	  cout<<"wrong"<<endl;	
  }
}
