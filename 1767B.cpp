#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
 
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        int number = arr[0];
 
        sort(arr, arr+n);
 
        for(int i = 1; i < n; i++)
        {
            if(number < arr[i])
            {
                number += (arr[i] - number + 1) / 2;
            }
        }
        cout << number << endl;
    }
}