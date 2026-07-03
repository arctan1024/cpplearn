#include <iostream>
using namespace std;

long long tc(int k){
    long long res = 0;
    for(int i = 1; i <= k; i++){
        res = res*10 + 9;
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int k;
        long long n;
        cin >> k >> n;
        if(n % tc(k) == 0){
            printf("aya\n");
        } else{
            printf("baka\n");
        }
    }
    return 0;
}