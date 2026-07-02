#include <bits/stdc++.h>
using namespace std;



int r(int n){
    int res = 1;
    int sum = 1;
    for(int i = 1; sum <= n; i++){
        if(n % sum == 0){
            res = max(res,i);
        }
        sum = sum*10+1;
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n;
        cin >> n;
        cout << r(n) << '\n';
    }
    return 0;
}