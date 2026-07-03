#include <iostream>
using namespace std;

int sum = 0;

void f(int m,int n,int c){
    if(c == m){
        sum++;
    }
    for(int i = 1; i <= m-c; i++){
        f(m,n,c+i);
    }
}

int fac(int x){
    int res = 1;
    for(int i = 1; i <= x; i++){
        res *= i;
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int m,n;
        cin >> m >> n;\
        f(m,n,0);
        cout << sum / fac(n) << '\n';
        sum = 0;
    }
    return 0;
}