#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    while(n--){
        ll x,y;
        cin >> x >> y;
        if(y%2==0 && x%2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
