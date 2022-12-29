#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int capacity = 0, current = 0, a, b;
    while(n--){
        cin >> a >> b; //a = people already in tram , b = people will enter in tram
        current = current - a;// first who will get off the tram
        current = current + b;
        if(current > capacity){
            capacity = current;
        }
    }
    cout << capacity << endl;
    return 0;
}
