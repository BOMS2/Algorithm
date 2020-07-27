#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a=9;
    int n=1;
    int arr[9], arr2[9];
    for(int i=0; i<a; i++){
        int num;
        cin >> num;
        arr[i] = num;
        arr2[i] = num;
    }
    sort(arr,arr + 9);
    cout << arr[8] << "\n";
    for(int i=0; i<a; i++){
        if(arr[8] == arr2[i]){
            cout << n;
        }
        n++;
    }
}