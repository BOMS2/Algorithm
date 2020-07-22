#include <iostream>

using namespace std;

int main()
{
    int a,b,c=0;
    cin >> a;
    int arrB[a], arrC[a], arrR[a];
    for(int i=0; i<a; i++){
        cin >> b >> c;
        arrB[i] = b;
        arrC[i] = c;
        arrR[i] = b+c;
    }
    for(int i=0; i<a; i++){
        cout << "Case #" << i+1 << ": " << arrB[i] << " + " << arrC[i] << " = " << arrR[i] << "\n";
    }
    
}