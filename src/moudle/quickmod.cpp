#include <iostream>
using namespace std;

long long quickmod(long long a,long long b,long long p){
    long long ans = 1;
    while(b > 0){
        if(b & 1){
            ans = ans * a % p;
        }
        a = a * a % p;
        b >>= 1;
    }
    return ans;
}

int main(){
    long long a,b,p;
    cin >> a >> b >> p;
    printf("%d^%d mod %d = %d\n",a,b,p,quickmod(a,b,p));
    return 0;
}