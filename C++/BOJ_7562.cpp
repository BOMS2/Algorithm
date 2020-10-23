// 나이트의 이동
#include <iostream>
#include <queue>
using namespace std;
int n,m,a,b,c,d;
int dx[8] = {-1,-2,-2,-1,1,2,1,2};
int dy[8] = {-2,-1,1,2,-2,-1,2,1};
int check[301][301] = {0, };
int arr[301][301] = {0, };
queue< pair<int, int> > q;

void bfs(int x, int y){
    check[x][y] = 1;
    while(!q.empty()){
        int nx = q.front().first;
        int ny = q.front().second;
        q.pop();
        for(int i=0; i<8; i++){
            int next_x = nx + dx[i];
            int next_y = ny + dy[i];
            if(next_x >= 0 && next_x < m && next_y >= 0 && next_y < m && check[next_x][next_y] == 0){
                arr[next_x][next_y] = arr[nx][ny] + 1;
                check[next_x][next_y] = 1;
                q.push(make_pair(next_x, next_y));
            }
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        cin >> a >> b >> c >> d;
        for(int k=0; k<m; k++){
            for(int u=0; u<m; u++){
                check[k][u] = 0;
                arr[k][u] = 0;
            }
        }
        q.push(make_pair(a,b));
        bfs(a,b);
        cout << arr[c][d] << "\n";
    }
    
}