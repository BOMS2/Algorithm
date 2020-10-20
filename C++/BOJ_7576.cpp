#include <iostream>
#include <queue>
using namespace std;
int n,m, answer=0;
int arr[1000][1000];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue<pair<int, int> > q;

void bfs(){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int next_x = dx[i] + x;
            int next_y = dy[i] + y;
            if(next_x >= 0 && next_x < n && next_y >= 0 && next_y < m && arr[next_x][next_y] == 0){
                arr[next_x][next_y] = arr[x][y] + 1;
                answer = arr[next_x][next_y] - 1;
                q.push(make_pair(next_x, next_y));
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int a,b, young=0;
    cin >> m >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
				q.push(make_pair(i, j));
			}else if(arr[i][j] == 0){
                young++;
            }
        }
    }
    if(young == 0){
        cout << 0;
    }else{
        bfs();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j] == 0){
                    answer = -1;
                }
            }
        }
        cout << answer;
    }
}