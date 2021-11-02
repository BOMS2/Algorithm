#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=0;
    cin >> n;
    vector<pair<pair<int, int>, pair<int, string> > > arr(n);
    
    for(int i=0; i<n; i++) {
        cin >> arr[i].second.second >> arr[i].second.first >> arr[i].first.second >> arr[i].first.first;
    }

    sort(arr.begin(),arr.end());
    cout << arr[n-1].second.second << "\n" << arr[0].second.second;
}