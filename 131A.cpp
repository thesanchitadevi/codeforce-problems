#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool istrue = true;
    
    for(int i=1; i<s.length(); i++){
        if(islower(s[i])){
            istrue = false;
            break;
        }
    }
    
    if(istrue){
        for(int i=0; i<s.length(); i++){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }
            else{
                s[i] = tolower(s[i]);
            }
        }
        cout << s;
    }
    else{
        cout << s;
    }

    return 0;
}
