#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int a=0,n=0,r=0,q=0;
    vector<int> arr;
    for(int i=0; i<10; i++){
        cin >> a;
        arr.push_back(a % 42);
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    cout << arr.size();
}