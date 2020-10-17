#include <iostream>
#include <algorithm>
using namespace std;
int arr[100010];
int n,m;
void Search(int key){ //이진탐색을 해야 시간초과 줄일 수 있음
    int start=0, mid;
    int end = n -1;
    while(end - start >= 0){
        mid = (start+end)/2;
        if(arr[mid] == key) {
            cout << 1 << "\n"; //endl 쓰면 시간초과남
            return;
        }else if(arr[mid] > key){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    cout << 0 << "\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0); //시간초과 방지해줄려고
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n); //시간 줄일려고씀
    cin >> m;
    int a;
    for(int i=0; i<m; i++){
        cin >> a;
        Search(a);
    }
}