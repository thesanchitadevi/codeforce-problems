#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        int a[m];
        long long int ans = 1;
        for(int i = 0; i < m; i++){
            cin >> a[i];
            ans *= a[i];
        }
        ans+=m-1;
        cout << ans*2022 << endl;
    }
    return 0;
}