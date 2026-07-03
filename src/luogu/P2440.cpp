#include <iostream>
using namespace std;

long long n,k;

long long wood[100005];

bool check(int mid){
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += wood[i] / mid;
    }
    if(sum >= k) return true;
    return false;
}

int sl(int l,int r){
    while(l < r){
        int mid = (l+r+1)>>1;
        if(check(mid)) l = mid;
        else r = mid-1;
    }
    return l;
}

int main(){
    cin >> n >> k;
    long long cnt = 0;
    for(int i = 1; i <= n; i++){
        cin >> wood[i];
        cnt += wood[i];
    }
    if(k > cnt){
        cout << 0 << '\n';
        return 0;
    }
    cout << sl(1,1e8) << '\n';
    return 0;
}