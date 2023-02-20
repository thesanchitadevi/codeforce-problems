#include<iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    for(;;){
        year++;
        int y1 = year / 1000; //cout <<"y1:" << y1 ;
        int y2 = year / 100 % 10; //cout <<"y2:" << y2 ;
        int y3 = year / 10 % 10; //cout <<"y3:" << y3 ;
        int y4 = year % 10; //cout <<"y4:" << y4 ;
        // cout << y1 << y2 << y3 << y4 << endl;
        if(y1!=y2 && y1!=y3 && y1!=y4 && y2!=y3 && y2!=y4 && y3!=y4){
            break;
        }
    }
    cout << year << endl;

    return 0;
}
