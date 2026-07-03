#include <iostream>
using namespace std;

const int N = 1e7;
const int M = 1e6+5;

bool isprime[N];
int prime[M];
int v[N];
int m = 0;

void pre(){
    int n = 1e6;
    for(int i = 2; i <= n; i++){
        if(v[i] == 0){
            isprime[i] = true;
            v[i] = i;
            prime[++m] = i;
        }
        for(int j = 1; j <= m; j++){
            if(i*prime[j] > n || v[i] < prime[j]) break;
            v[i*prime[j]] = prime[j];
        }
    }
}

long long cnt(long long l,long long r){
    long long res = 0;
    for(long long i = l; i <= r; i++){
        if(isprime[i]) res++;
    }
    return res;
}

int main(){
    pre();
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        long long l,r;
        cin >> l >> r;
        if(l < 1 || r > m){
            printf("Crossing the line\n");
        } else{
            printf("%lld\n",cnt(l,r));
        }
    }
    return 0;
}