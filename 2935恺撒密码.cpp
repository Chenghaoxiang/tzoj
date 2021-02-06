#include<bits/stdc++.h>
using namespace std;
	string s;
int main()
{
	while(getline(cin,s))
	 {
		
		if(s == "START") continue;
		if(s == "END") continue;
		if(s == "ENDOFINPUT") break;		
		int len = s.length();
		for(int i = 0; i<len; i++) 
		{
			if(s[i] >= 'A' && s[i] <= 'Z') 
			{
				s[i]=(s[i]-'A'+26-5)%26+'A'; 	
			}
		}
		cout << s << endl;
	}
	return 0 ;
}

