#include <iostream>
using namespace std;
int m,n;
char arr[51][51];
int result = INT32_MAX;
int min(int a, int b) {
    return a > b ? b : a;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    cin >> m >> n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<m - 7; i++){
        for(int j=0; j<n - 7; j++){ 
            int ans=0;
            
                for(int a=0; a<8; a++){
                    for(int b=0; b<8; b++){
                        if(a % 2 == 0 && b % 2 == 0){
                            if(arr[i + a][j + b] == 'B') ans++;
                        }else if(a % 2 == 0 && b % 2 == 1){
                            if(arr[i + a][j + b] == 'W') ans++;
                        }else if(a % 2 == 1 && b % 2 == 0){
                            if(arr[i + a][j + b] == 'W') ans++;
                        }else if(a % 2 == 1 && b % 2 == 1){
                            if(arr[i + a][j + b] == 'B') ans++;
                        }
                    }
                }
              
            ans = min(ans, 64 - ans);
            result = min(ans, result);
        }
    }
    cout << result;
}