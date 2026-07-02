#include <iostream>
using namespace std;

struct Node{
    int x;
    int y;
};

int n,m;
int sx,sy;
int fx,fy;
int map[20][20];
Node path[300];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

void out(int d){
    for(int i = 1; i < d; i++){
        printf("(%d,%d)->",path[i].x,path[i].y);
    }
    printf("(%d,%d)->\n",path[d].x,path[d].y);
}

void dfs(int x,int y,int step){
    if(x < 1 || x > n || y < 1 || y > m) return;
    if(map[x][y] == 0) return;
    if(x == fx && y == fy){
        out(step);
        return;
    }
    map[x][y] = 1;
    path[step] = {x,y};
    for(int i = 0; i < 4; i++){
        dfs(x+dx[i],y+dy[i],step+1);
    }
    map[x][y] = 0;
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> map[i][j];
        }
    }
    cin >> sx >> sy;
    cin >> fx >> fy;
    dfs(sx,sy,1);
    return 0;
}