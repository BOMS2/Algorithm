#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    
    while(1){
        cin >> n;
        if(n < 0){
            break;
        }
        else if(n == 0){
            int num=0;
            for(int j=0; j<v.size(); j++){
                for(int k=0; k<v.size(); k++){
                    if((v[k] * 2) == v[j]){
                        num++;
                    }
                }
            }
            cout << num << endl;
            v.clear();
        }else {
            v.push_back(n);
        }
    }
}
