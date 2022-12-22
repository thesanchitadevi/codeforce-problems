#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    while(n--){
        long long int a, b, c;
        cin >> a >> b >> c;
        int arr[b];
        int x = 0;
        for(int i = 0; i < b; i++){
            cin >> arr[i];
            x = max(x, arr[i]); 
        }
        // cout << x << endl; 
        if((a+c-1)/c >= x) 
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
}

// input
// 2
// 12 6 2
// 1 1 1 1 1 7 
// 12 6 2
// 2 2 2 2 2 2
// output
// NO
// YES

// WA
