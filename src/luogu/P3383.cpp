#include <iostream>
using namespace std;

const int N = 1e9;

int prime[10000],v[N];
int m = 0;

void pre(int n){
    for(int i = 2; i <= n; i++){
        if(v[i] == 0){
            v[i] = i;
            prime[++m] = i;
        }
        for(int j = 1; j <= m; j++){
            if(i*prime[j] > n || v[i] < prime[j]) break;
            v[i*prime[j]] = prime[j];
        }
    }
}

int main(){
    int n,q;
    cin >> n >> q;
    pre(n);
    for(int i = 1; i <= q; i++){
        int k;
        cin >> k;
        cout << prime[k] << '\n';
    }
    return 0;
}