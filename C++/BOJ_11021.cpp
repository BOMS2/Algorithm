#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;
    cin >> a;
    int arr[a];
    for(int i=0; i<a; i++){
        cin >> b >> c;
        arr[i] = b+c;
    }
    for(int i=0; i<a; i++){
        cout << "Case #" << i+1 << ": " << arr[i] << "\n";
    }
    
}