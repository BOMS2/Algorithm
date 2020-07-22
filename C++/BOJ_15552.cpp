#include <iostream>
using namespace std;
int main(){
    //cin, cout 시간 단축
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int a,b,c=0;
    cin >> a;
    for(int i=0; i<a; i++){
        cin >> b >> c;
        //endl 보다 \n이 빠름
        cout << b+c << "\n";
    }
}