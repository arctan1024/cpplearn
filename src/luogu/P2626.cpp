#include <iostream>
using namespace std;

const long long N = 1LL << 31;
long long mem[50];

long long f(int n){
    if(n == 1 || n == 2) return 1;
    if(mem[n] != 0) return mem[n];
    mem[n] = f(n-2) + f(n-1);
    return mem[n];
}

int prime[N+5],v[N+5];
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
    int n;
    long long ans = f(n);
    int k = ans % N;
    pre(10000);
    printf("%d=",k);
    while(k > 1){
        for(int i = 1; i <= m; i++){
            if(k % prime[i] == 0){
                printf("%d",prime[i]);
                k /= prime[i];
                if(k != 1) printf("*");
            }
        }
    }
}