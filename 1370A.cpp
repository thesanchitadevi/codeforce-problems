#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    while(n--){
        cin >> x;
        if(x <= 3) 
            cout<<"1\n";
        else 
            cout<<x/2<<endl;
    }
}