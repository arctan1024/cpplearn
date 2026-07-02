#include <bits/stdc++.h>
using namespace std;

int n,k;
int ans;

void dfs(int x,int y,int step,vector<vector<bool>>& vis){
    if(x < 1 || x > n || y < 1 || y > n) return;
    if(vis[x][y] == true) return;
    if(x == 1 && y == 1 && step != 0){
        if(step % 2 != 0){
            ans = min(ans,step);
        }
        return;
    }
    if(ans != 1e9 && step >= ans) return;
    vis[x][y] = true;
    for(int i = 0; i <= k; i++){
        dfs(x-i,y-k+1,step+1,vis);
        dfs(x-i,y+k-1,step+1,vis);
        dfs(x+i,y-k+i,step+1,vis);
        dfs(x+i,y+k-i,step+1,vis);
    }
    vis[x][y] = false;
}

int main(){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        ans = 1e9;
        cin >> n >> k;
        vector<vector<bool>> temp(n+5,vector<bool>(n+5,false));
        dfs(1,1,0,temp);
        if(ans == 1e9) cout << -1 << '\n';
        else cout << ans << '\n';
    }
    return 0;
}