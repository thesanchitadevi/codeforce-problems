#include<iostream>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n];
        ll even=0, odd=0;
        for(ll i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]%2 == 0) {
                even+=arr[i];
                // cout <<"even: " << even << endl;
            }
            else{ 
                odd+=arr[i];
                // cout << "odd: " << odd << endl;
            }
        }
        if(even>odd) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}