#include <bits/stdc++.h>
using namespace std;

int cnt(int p,int t,int m){
    int c = 1;
    double sc = max((250-t)*1.0/250*p-50*(c-1),0.3*p);
    if(sc < m*1.0) return 0;
    if((250-t)*1.0/250*p-50*(c-1) < 0.3*p) return -1;
    while(1){
        c++;
        sc = max((250-t)*1.0/250*p-50*(c-1),0.3*p);
        if(sc < m) return c-1;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n,m;
        cin >> n >> m;
        vector<int> temp;
        for(int j = 1; j <= n; j++){
            int p;
            cin >> p;
            temp.push_back(p);
        }
        for(int k = 0; k < n; k++){
            int t;
            cin >> t;
            int ans = cnt(temp[k],t,m);
            if(ans == -1){
                cout << "inf" << ' ';
            } else{
                cout << ans << ' ';
            }
        }
    }
    return 0;
}