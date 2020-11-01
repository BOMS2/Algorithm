// 영역구하기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[101][101] = {0, };
int visit[101][101] = {0, };
int check[101][101] = {0, };
int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int m,n,k, cnt=0;
vector<int> answer;
void dfs(int a, int b){
    visit[a][b] = 1;
    cnt++;
    for(int i=0; i<4; i++){
        int dx = a + dir[i][0];
        int dy = b + dir[i][1];
 
        if(dx>=0 && dx<m && dy>=0 && dy<n && visit[dx][dy] == 0){
            
            if(arr[dx][dy] == 0){
                dfs(dx, dy);
            }
            
        }
    }
    
}
int main(){
    
    cin >> m >> n >> k;
    for(int i=0; i<k; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        for(int j=b; j<d; j++){
            for(int s=a; s<c; s++){
                arr[j][s] = 1;
                visit[j][s] = 1;
            }
            
        }
        
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == 0 && visit[i][j] == 0){
                cnt = 0;
                dfs(i, j);
                answer.push_back(cnt);
            }
        }
    }
    
    sort(answer.begin(), answer.end());
	cout << answer.size() << "\n";
	for (int i = 0; i < answer.size(); i++) {
        if(i == answer.size() - 1){
            cout << answer[i];
        }else cout << answer[i] << " ";
    }
}