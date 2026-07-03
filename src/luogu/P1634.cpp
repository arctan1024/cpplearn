#include <iostream>
using namespace std;

int main(){
    unsigned long long x,n;
    cin >> x >> n;
    unsigned long long res = 1;
    for(int i = 1; i <= n; i++){
        res = res * x + res;
    }
    cout << res << '\n';
    return 0;
}