#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

int n,m;
int a[101][101];
int visited[101][101];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue <pair<int, int> > q;

void bfs(int x, int y){
    q.push(make_pair(x,y));
    visited[x][y] = 1;
    while(!q.empty()){
        int nx = q.front().first;
        int ny = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int next_x = nx + dx[i];
            int next_y = ny + dy[i];
            if (next_x>=0 && next_x<n && next_y>=0 && next_y<m){
                if(a[next_x][next_y] == 1 && visited[next_x][next_y] == 0){
                    visited[next_x][next_y] = visited[nx][ny] + 1;
                    q.push(make_pair(next_x,next_y));
                }
                
            }
        }
        
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%1d",&a[i][j]);
        }
    }
    bfs(0,0);
    cout << visited[n - 1][m - 1];
}
