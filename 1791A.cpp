
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s == "c" || s =="o" || s == "d" || s == "e"
        || s == "f" || s == "r" || s == "s"){
            cout << "YES" << endl;
        }
        else if(s == "C" || s =="O" || s == "D" || s == "E"
        || s == "F" || s == "R" || s == "S"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
