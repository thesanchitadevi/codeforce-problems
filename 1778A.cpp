#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n];
        long long int value = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            value += a[i];
        }
        long long sum = 0;
        for(int i=1; i<n; i++){
            if(a[i] == -1 && a[i-1] == -1){
                sum=1;
                break;
            }
        }
        if(sum){
            cout << value+4 << endl;
        }
        else{
            if(value==n){
                cout << value - 4 << endl;
            }
            else{
                cout << value << endl;
            }
        }
    }

    return 0;
}
