#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a=0, result=0;
    scanf("%d", &a);
    char arr[a];
    scanf("%s", arr);
    for(int i=0; i<a; i++){
        //0이 48임 그래서 1-0 = 49-48, 2-0=50-48 ... 
        result += arr[i] - '0';
    }
    printf("%d", result);
}