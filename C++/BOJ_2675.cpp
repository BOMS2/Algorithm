#include <iostream>
#include <string>
using namespace std;

int main(){
    int a=0, n=0;
    string s;
    cin >> n;
    
    for(int x=0; x<n; x++){
    cin >> a >> s;
     for(int i=0; i<s.length(); i++){
        for(int j=0; j<a; j++){
            cout << s.at(i);
            }
        }
        cout << endl;
    }
}