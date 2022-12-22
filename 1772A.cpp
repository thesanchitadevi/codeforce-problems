#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        cout << s[0]+s[2] - 2*('0') << endl;
    }
    return 0;
}