#include <iostream>


using namespace std;

int main()
{
    int a,b,c,n, count =0;
    cin >> a;
    b = a / 10;
    c = a % 10;
    do{
        n = c*10 + (b+c)%10;
        b = n / 10;
        c = n % 10;
        count++;
    }while(a != n);
    
    cout << count << endl;
}
