#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int res = a * b;
    while(b != 0){
        cout << a * (b % 10) << '\n';
        b /= 10;
    }
    cout << res << '\n';
    return 0;
}