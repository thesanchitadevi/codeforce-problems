#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int h, m;
    while(n--){
        cin >> h >> m;
        int day = 60*24;
        int time = h*60 + m;
        cout << day - time << endl;
    }
}