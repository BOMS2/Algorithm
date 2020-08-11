#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
   string s;
   cin >> s;
   int max = 0;
   int arr[26] = {0,};
   char result;
   for(int i=0; i<s.length(); i++){
       s[i] = toupper(s[i]);
       for(char c = 'A'; c <= 'Z'; c++){
           if(s[i] == c){
               arr[c - 'A'] += 1;
           }
    }
  }
  for(int j=0; j<26; j++){
    if(max < arr[j]){
          max = arr[j];
          
          result = j + 'A';
    }else if(max == arr[j]){
            result = '?';
        }
    }
  cout << result;
}