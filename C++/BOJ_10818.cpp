#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a=0;
    cin >> a;
    int arr[a];
    for(int i=0; i<a; i++){
        int num;
        cin >> num;
        arr[i] = num;
    }
    sort(arr, arr + a);
    cout << arr[0] << " " << arr[a - 1];
}