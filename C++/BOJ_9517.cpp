#include <iostream>

using namespace std;

int main()
{
    int k=0, n=0, count=0;
    cin >> k >> n;
    int second[n];
    char answer[n];
    for(int i=0; i<n; i++){
        int a=0;
        char c;
        cin >> a >> c;
        second[i] = a;
        answer[i] = c;
    }
    for(int j=0; j<n; j++){
        count += second[j];
        if(count <= 210){
            if(answer[j] == 'T'){
                k++;
            }
            if(count > 210){
                if(k >8){
                    k %= 8;
                }
                cout << k;
                break;
            }
            
        }else{
            if(k >8){
                k %= 8;
            }
            cout << k;
            break;
        }
    }
}
