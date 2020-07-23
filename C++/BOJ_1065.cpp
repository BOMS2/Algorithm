#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,c=0;
    scanf("%d", &a);
    
    if(a < 100){ //2자리
        c = a;
    }
    else {
        c =c+99;
        for(int i=100; i <= a; i++){
            if((i/100) - ((i/10)%10) == ((i/10)%10) - (i%10)){
                c++;
            }
        }
    }
    printf("%d", c);
}
