#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int r=0;
void permutations(vector<int>& Array, int Start, int End, int k)
{
    if (Start == End)
    {
        int five =500;
        for(int i=0; i<End; i++){
            five += Array[i] - k;
            if(five < 500) break;
        }
        if(five >= 500) r++;
    }
    else
    {
        for (int i = Start; i < End; ++i)
        {
            swap(Array[Start], Array[i]);
            permutations(Array, Start + 1, End, k);
            swap(Array[Start], Array[i]);
        }
    }
}

int main()
{
    int n=0, k=0, a=0;
    cin >> n >> k;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> a;
        arr.push_back(a);
    }
    permutations(arr, 0, n, k);
    cout << r;
}