#include <iostream>
using namespace std;

const int N = 1e9;

int prime[N],v[N];
int m = 0;

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

void sc(int x){
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= m; j++){
            if(i+j == x){
                printf("%d=%d+%d\n",x,i,j);
                return;
            }
        }
    }
}

int main(){
    pre(10000);
    int n;
    cin >> n;
    for(int i = 4; i <= n; i+=2){
        sc(i);
    }
    return 0;
}