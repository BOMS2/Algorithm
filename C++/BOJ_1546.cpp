#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n=0;
    float result=0;
    cin >> n;
    int arr[n - 1];
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    sort(arr, arr + n);
    int m = arr[n - 1];
    for(int j=0; j<n; j++){
        float b = float(arr[j]);
        result += b / m * 100;
    }
    printf("%.2f", result/n);
}