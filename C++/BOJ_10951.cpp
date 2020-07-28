#include <iostream>

using namespace std;

//입력이 있을 경우 true, 입력이 없을 경우 false를 리턴하게 된다.
int main(void)
{
    //테스트케이스 개수가 주어지지 않는다면 EOF 사용해도 된다.
    int a=0,b=0;
    while(cin >> a >> b){
        cout << a+b << "\n";
    }
}