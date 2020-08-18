#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int n=0;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        switch(s.at(i)){
            case 'A':
            case 'B':
            case 'C':
                n += 3;
                break;
            case 'D':
            case 'E':
            case 'F': 
                n += 4;
                break;
            case 'G':
            case 'H':
            case 'I':
                n += 5;
                break;
            case 'J':
            case 'K':
            case 'L':
                n += 6;
                break;
            case 'M':
            case 'N':
            case 'O':
                n += 7;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                n += 8;
                break;
            case 'T':
            case 'U':
            case 'V':
                n += 9;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                n += 10;
                break;
        }
    }
    cout << n;
    
    
}
