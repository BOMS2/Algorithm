#include <iostream>

using namespace std;

int main()
{
    int a=0;
    cin >> a;
    for(int i=0; i<a; i++){
        if(a==1) {
            cout << "*";
        }
        else {
            for(int j=0; j<i+1; j++){
                
                if(j==i){
                    cout << "*"<< "\n";
                }else {
                    cout << "*";
                }
            }
        }
    }
}