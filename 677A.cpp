#include<iostream>
using namespace std;

int main(){
    int n, max_h;
    cin >> n;
    cin >> max_h;
    int a[n];
    int below_max = 0, up_max = 0;
    for(int i =0; i < n; i++){
        cin >> a[i];
        if(a[i] > max_h){
            up_max++; 
        }
        else
            below_max++;
    }
    cout << 2*up_max + below_max << endl;
}