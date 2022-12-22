#include<iostream>
using namespace std;
 
int main(){
    int n, cnt = 0;
    cin >> n;
    while(n--){
        int x, y, z;
        cin >> x >> y >> z;
        if( (x + y + z) >= 2){
            cnt++;
        }
    }
    cout << cnt << endl;
}