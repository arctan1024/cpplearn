#include <iostream>
using namespace std;

bool check(int n){
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int x,y;
    cin >> x >> y;
    int res = 0;
    for(int i = x; i <= y; i++){
        if(check(i)) res++;
    }
    cout << res << '\n';
    return 0;
}