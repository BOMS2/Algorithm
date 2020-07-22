#include <iostream>

using namespace std;

int main()
{
    int a,n=0;
    cin >> a;
    for(int i=0; i<a; i++){
        for(int j=1; j<i+1; j++){
            cout << "*";
        }
        cout << "*" << "\n";
    }
    for(int i=0; i<a-1; i++){
        for(int j=i+1; j<a-1; j++){
            cout << "*";
        }
        cout << "*" << "\n";
    }
}