#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n=0;
    cin >> n;
   for(int i=0; i<n; i++){
        int count=0, result=0;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s.at(i) == 'O') count++;
            else count=0;
            result += count;
        }
        cout << result << '\n';
    }
}