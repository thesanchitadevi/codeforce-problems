
#include <iostream>

using namespace std;

int main()
{
    int n, ans;
    cin >> n;
    if(n%2 == 0){
        ans = n/2;
        cout << ans << endl;
        for(int i=0; i<ans; i++){
            cout << 2 << " ";
        }
        cout << endl;
    }
    else if(n==3){
        cout<<1<<endl;
        cout<<3<<endl;
    }
    else{
        n = n-3; //5-3=2
        ans = n/2; //1
        cout << ans+1 << endl; //1+1=2
        for(int i=0; i<ans; i++){
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
}
