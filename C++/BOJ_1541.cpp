#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>

using namespace std;

char* s1;

int pluss(char* cal){
    char* s2;
    int p =0;
    s2 = strtok(cal, "+-");
    p += atoi(s2);
    while(s2 = strtok(NULL, "+-")){
        p += atoi(s2);
    }
    return p;
}

//scanf, printf 쓴거는 컴파일 시간때문에
int main()
{
    char s[50];
    char c[50];
    int first=0, i=0;
    scanf("%s", s);
    
    
    s1 = strtok(s, "-");
    strcpy(c, s1);
    s1 = strtok(NULL, "");
    
    first = pluss(c);
    if(s1 != NULL) first -= pluss(s1);
    
    printf("%d", first);
}
