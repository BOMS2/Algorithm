// 양
#include <iostream>
#include <queue>
using namespace std;
int r,c;
char arr[251][251];
int visit[251][251];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue <pair<int, int> > q;
int totals, totalw;

void bfs(int x, int y){
    int sheep=0, wolf=0;
    visit[x][y] = 1; 
	q.push(make_pair(x, y));
	while (!q.empty())
	{
		int nx = q.front().first;
		int ny = q.front().second;
		q.pop();
        if(arr[nx][ny] == 'v') wolf++;
        if(arr[nx][ny] == 'o') sheep++;
		for (int i = 0; i < 4; i++) {
			int next_x = nx + dx[i];
			int next_y = ny + dy[i];
			if (next_x>=0 && next_x<r && next_y>=0 && next_y<c && visit[next_x][next_y] == 0){
                if(arr[next_x][next_y] != '#'){
                    visit[next_x][next_y] = 1;
				    q.push(make_pair(next_x, next_y)); 
                }
			}
		}
	}
    if (sheep > wolf) totals = totals + sheep;
    else totalw = totalw + wolf;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> r >> c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(visit[i][j] == 0) bfs(i, j);
        }
    }
    
    cout << totals << " " << totalw;
}