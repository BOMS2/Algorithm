#include <iostream>
#include <vector>

using namespace std;

int n,m,answer = 0;
vector< vector<int> > v;
int visited[501];

void dfs(int start){
    visited[start] = 1;
    for(int i=0; i<v[start].size(); i++){
        int x = v[start][i];
        if(visited[x] == 0) {
            visited[x] = 1;
            answer++;
        }
        for(int j=0; j<v[x].size(); j++){
            if(visited[v[x][j]] == 0) {
                visited[v[x][j]] = 1;
                answer++;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    v.resize(n + 1);
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    cout << answer;
}