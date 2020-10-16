// 실행방법 : 커맨드 + 시프트 + B
#include <iostream>
#include <vector>
using namespace std;

//촌수 관계는 트리 형태이지만, 이를 양방향 그래프로 치환하여 dfs로 풀 수 있다.
vector<int> g[100];
int went[100];
int ans =-1; //촌수 없으면 -1반환

void dfs(int a, int b, int cnt){
    went[a] = 1; //들린 곳이니까 1로 채워줌
    if(a == b) { ans = cnt; } //둘이 같다면 연결되어있는거라 정답(ans)에 저장
    for(int i=0; i<g[a].size(); i++){ //x에 연결된 갯수만큼
        if(went[g[a][i]] == 0){ //안들렸던 곳임
            dfs(g[a][i],b,cnt +1); //연결되어있는 숫자를 찾은거니까 cnt+1
        }
    }
}

int main(){
    int n,a,b,m,x,y;
    cin >> n >> a >> b >> m;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(a,b,0);
    cout << ans;
}