#include <iostream>

using namespace std;

int main()
{
    int a=0, result=0;
    cin >> a;
    
    for(int i=1; i<a+1; i++){
        result += i;
    }
    cout << result;
}
