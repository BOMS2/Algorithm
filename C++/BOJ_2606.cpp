//바이러스
#include <iostream>
#include <vector>
using namespace std;
int n,m, ans =0;
vector< vector<int> > g; //vector<int> g[101]형식 아니고 이렇게 해줌 resize 해주려고 
int visit[101];

void dfs(int x){
    visit[x] = 1;
    for(int i=0; i<g[x].size(); i++){
        if(visit[g[x][i]] == 0){
            ans++;
            dfs(g[x][i]);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    g.resize(n +1); // 메모리 초과 떠서 이거 추가해줌 ㅠ
    for(int i=0; i<m; i++){
        int x,y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    cout << ans;
}