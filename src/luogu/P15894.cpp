#include <iostream>
using namespace std;

bool is_prime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int a,b;
        cin >> a >> b;
        if(b-a != 2){
            printf("N\n");
        } else{
            if(is_prime(a) && is_prime(b)){
                printf("Y\n");
            } else{
                printf("N\n");
            }
        }
    }
    return 0;
}