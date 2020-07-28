#include <iostream>

using namespace std;

int main()
{
    int a=0, n=0;
    cin >> a;
    n=a;
    for(int i=0; i<a; i++){
        for(int j=1; j<n; j++){
          cout << " ";
        }
        for(int j=a; j>a-i; j--){
            cout << "*";
        }
    cout << "*" << "\n";
    n--;
    }
}