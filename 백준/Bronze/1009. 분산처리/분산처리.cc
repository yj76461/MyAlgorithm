#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T, a, b;
    vector<int> res;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        int tmp = 1;
        cin >> a >> b;
        for(int j = 0; j < b; j++){
            tmp *= a;
            tmp %= 10;
            if(tmp == 0){
                tmp = 10;
            }
        }
        res.push_back(tmp);
    }
    
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << '\n';
    }
    
    return 0;
}