#include <bits/stdc++.h>
using namespace std;

bool isp(int n){
    if(n < 2) return false;
    if(n > 10 && (n % 10 % 5 == 0 || n % 10 % 2 == 0)) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool check(int n){
    int sum = 0,a = n;
    while(a > 0){
        sum = sum * 10 + a % 10;
        a /= 10;
    }
    return sum == n;
}

int main(){
    int a,b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0) continue;
        if(check(i) && isp(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}