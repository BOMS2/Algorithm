// 트리의 부모 찾기
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 100001;
vector<int> v[MAX];
int n;
int visit[MAX] = {0, };
int answer[MAX];

void dfs(int x){
    visit[x] = 1;
    for(int i=0; i<v[x].size(); i++) {
        int next = v[x][i];
        if(visit[v[x][i]] == 0) {
            answer[next] = x;
            dfs(v[x][i]);
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i=0; i<n-1; i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    for(int j=2; j<=n; j++){
        cout << answer[j] << "\n";
    }
    return 0;
}

1   6,4
2   4
3   6,5
4   1,2,7
5   3
6   1,3
7   4