#include <iostream>
using namespace std;

const int N = 5e4;
const int M = 2e4+5;

bool isprime[N];
int prime[M],v[N];
int m = 0;

void pre(){
    int n = 20000;
    for(int i = 2; i <= n; i++){
        if(v[i] == 0){
            v[i] = i;
            prime[++m] = i;
            isprime[i] = true;
        }
        for(int j = 1; j <= m; j++){
            if(i*prime[j] > n || v[i] < prime[j]) break;
            v[i*prime[j]] = prime[j];
        }
    }
}

int main(){
    pre();
    int n;
    cin >> n;
    for(int i = 1; prime[i] < n; i++){
        for(int j = 1; prime[j] < n; j++){
            int rest = n - prime[i] - prime[j];
            if(isprime[rest]){
                printf("%d %d %d\n",prime[i],prime[j],rest);
                return 0;
            }
        }
    }
    return 0;
}