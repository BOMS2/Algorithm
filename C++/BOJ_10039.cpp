#include <iostream>

using namespace std;

int main()
{
    int a,n,result=0;
    int arr[100];
    while(n<5){
        cin >> a;
        if(a<40){
            a = 40;
        }
        arr[n] = a;
        n++;
    }
    for(int i=0; i<n; i++){
        result += arr[i];
    }
    cout << result/n;
}