#include <bits/stdc++.h>
using namespace std;

void prefix(vector<vector<int>> & nums, int x, int y){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= y; j++){
            nums[i][j] += nums[i-1][j] + nums[i][j-1] - nums[i-1][j-1];//二维数组前缀和核心代码，差分就是把+=改为-=
        }
    }
}

int main(){
    int n,t,x,y,o,p;
    cin >> n >> t;
    vector<vector<int>> carp(n+2,vector<int>(n+2,0));//这里是初始化vector为n+2行，n+2列且元素全填充为0
    while(t > 0){
        cin >> x >> y;
        cin >> o >> p;
        carp[x][y]++;
        carp[x][p+1]--;
        carp[o+1][y]--;
        carp[o+1][p+1]++;
        t--;
    }
    prefix(carp,n,n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << carp[i][j] << " ";
            if(j == n) cout << endl;
        }
    }
    return 0;
}