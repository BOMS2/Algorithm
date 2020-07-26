#include <iostream>

using namespace std;

int main()
{
    int a,n,m=0;
    cin >> a;
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            if(j == 0){
                cout << "*";
            }else{
                if(j % 2 == 0){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }
        cout << "\n";
        for(int k=0; k<a; k++){
            if(k == 0){
                cout << " ";
            }else{
                if(k % 2 == 0){
                    cout << " ";
                }else{
                    cout << "*";
                }
            }
        }
        cout << "\n";
    }
}