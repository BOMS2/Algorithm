#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    string s;
    int count=0, n=0, i=0;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        string str, str2;
        if((i + 1) < s.length()){
            str += s.at(i);
            str += s.at(i + 1);
            for(int j=0;j<8;j++){
                if(arr[j] == str) count--;
            }
        }
        if((i + 2) < s.length()){
            str2 += s.at(i);
            str2 += s.at(i + 1);
            str2 += s.at(i + 2);
            for(int j=0;j<8;j++){
                if(arr[j] == str2) count--;
            }
        }
        count++;
    }
    cout << count;
}
