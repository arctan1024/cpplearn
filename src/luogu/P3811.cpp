#include <iostream>
using namespace std;

const int N = 3e6+5;
int inv[N];

int main(){
    int n;
    long long p;;
    cin >> n >> p;
    inv[1] = 1;
    cout << 1 << '\n';
    for(int i = 2; i <= n; i++){
        inv[i] = (p-(p/i)*inv[p%i] % p) % p;
        cout << inv[i] << '\n';
    }
    return 0;
}