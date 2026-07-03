#include <iostream>
using namespace std;

const int N = 1e9;
long long prime[N],v[N];
long long m = 0;

void pre(int n){
    for(int i = 2; i <= n; i++){
        if(v[i] == 0){
            v[i] = i;
            prime[++m] = i;
        }
        for(int j = 1; j <= m; j++){
            if(i * prime[j] > n || v[i] < prime[j]) break;
            v[i * prime[j]] = prime[j];
        }
    }
}

int main(){
    pre(1e9);
    int n;
    cin >> n;
    for(int i = 1; i <= m; i++){
        if(n % prime[i] == 0){
            cout << n / prime[i] << '\n';
            break;
        }
    }
    return 0;
}