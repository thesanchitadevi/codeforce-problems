
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string h="hello";
    int j=0;
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == h[j]){
            j++;
            count++;
            if(count == 5) break;
        }
    }
    if(count == 5){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
