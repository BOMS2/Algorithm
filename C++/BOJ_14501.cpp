#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arrT[16], arrP[16];
int answer=0;
//DP 문제였는데 메모이제이션 안씀, 재귀함수
void counsel(int now, int sum, int add){ 
    if(now == n){
        answer = max(answer, sum);
        cout << "== : " << answer << "\n";
        return;
    }else if(now > n){
        answer = max(answer, sum - add);
        cout << "> : " << answer << "\n";
        return;
    }
    for(int i=now + arrT[now]; i< n + arrT[now]; i++){
        cout << "i : " << i << "\n" << "sum : " << sum << "\n";
        counsel(i, sum + arrP[now], arrP[now]);
    }
    
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++) cin >> arrT[i] >> arrP[i];

    for(int i=0; i<n; i++) counsel(i, 0, 0);
    
    cout << "answer : " << answer;
}