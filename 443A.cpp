#include<bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int count = 0;
	string s;
    // cin >> s;
    getline(cin,s);
	sort(s.begin(),s.end() );
	for(int i=0; i<s.length() - 1; i++)
	{ 
	    if(s[i]=='{}' || s[i]==',' || s[i]==' ')
            {
                continue;
            }
            else
            {
                if(s[i]!=s[i+1])
                {
                    count++;
                }
            }
    }
    cout<<count-1;
}
