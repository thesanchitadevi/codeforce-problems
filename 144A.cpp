#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], mf=0, ml=100, max_h, min_h;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>mf){
            mf=arr[i];
            max_h=i;
        }
        if(arr[i]<=ml){
            ml=arr[i];
            min_h=i;
        }
    }
    if(max_h>min_h){
        min_h++;
    }
    cout << max_h+(n-1)-min_h << endl;

    return 0;
}
