#include <iostream>
using namespace std;

long long qmod(long long a,long long b,long long p){
    long long ans = 1;
    while(b > 1){
        if(b & 1){
            ans = ans*a%p;
        }
        a = a*a%p;
        b >>= 1;
    }
    return ans;
}

int main(){
    long long a,b,p;
    printf("%d^%d mod %d=%d",a,b,p,qmod(a,b,p));
    return 0;
}