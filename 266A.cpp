#include<iostream>
using namespace std;

int main(){
    int n, a = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == s[i+1]){
            a++;
        }
    }
    cout << a << endl;
}