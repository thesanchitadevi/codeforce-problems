#include <iostream>

using namespace std;

int main()
{
   int test;
   cin >> test;
   while(test--){
       long long int n;
       cin >> n;
       if(n%2){
           cout << "-1" << endl;
       }
       else{
           cout << "1 " << n/2 << endl;
       }
   }
    return 0;
}