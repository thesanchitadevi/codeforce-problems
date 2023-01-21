#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        long long int arr[n];
        long long int ans = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=0; i<n-1; i++){
            if((arr[i]%2 && arr[i+1]%2) || arr[i]%2==0 && arr[i+1]%2==0){
                ans++;
            }
        }
        cout << ans << endl;
    }
    
}