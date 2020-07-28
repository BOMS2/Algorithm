#include <iostream>

using namespace std;

int main()
{
    int a=0,n=0,m=0;
    cin >> a;
    n=a;
    m=a;
    //윗부분
    for(int i=0; i<a; i++){
        for(int j=a; j>a-i; j--){
            cout << " ";
        }
        for(int j=1; j<n; j++){
          cout << "*";
        }
        for(int j=i+1; j<a; j++){
            cout << "*";
        }
        cout << "*" << "\n";
        n--;
    }
    //아랫부분
    for(int i=0; i<a; i++){
        for(int j=1; j<m; j++){
            if(i != 0) {
                cout << " ";
            }
        }
        for(int j=a; j>a-i; j--){
            cout << "*";
        }
        for(int k=a; k>m; k--){
            if(i != 0){
                cout << "*";
            }
        }
        if(i != 0) {
            cout << "*" << "\n";
        }
        m--;
    }
}