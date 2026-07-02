#include <bits/stdc++.h>
using namespace std;

struct Node{
    int x;
    int y;
    int step;
};

bool vis[50][50];
int dirs[8][2] = {{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1},{-2,-2},{-2,2},{2,-2},{2,2}};

int bfs(int sx,int sy){
    queue<Node> q;
    q.push({sx,sy,0});
    vis[sx][sy] = true;

    while(!q.empty()){
        memset(vis,false,sizeof(vis));
        Node node = q.front();
        q.pop();
        if(node.x == 1 && node.y == 1){
            return node.step;
        }
        for(int i = 0; i < 8; i++){
            int nx = node.x + dirs[i][0];
            int ny = node.y + dirs[i][1];
            if(nx >= 1 && ny >= 1 && !vis[nx][ny]){
                q.push({nx,ny,node.step+1});
                vis[nx][ny] = true;
            }
        }
    }
}

int main(){
    int x1,y1;
    int x2,y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cout << bfs(x1,y1) << '\n';
    cout << bfs(x2,y2) << '\n';
    return 0;
}