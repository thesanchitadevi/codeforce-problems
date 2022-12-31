#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int sum1,sum2,sum3;
    sum1=abs(x-y)+abs(x-z);
    sum2=abs(x-y)+abs(y-z);
    sum3=abs(x-z)+abs(y-z);
    int sum=min(sum1,sum2);
    sum=min(sum,sum3);
    cout << sum ;
}