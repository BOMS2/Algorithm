#include <iostream>
#include <string>

int main(){
	string s;
	char Arr[4] = {a,e,i,o,u};
	char M[100];
	int n=0, m=0;
	cin >> s;
	
	for(int i=0; i<s.size(); i++){
		for(int j=0; j<4; j++){
			if(s.at(i) == Arr[j]){
				M[n] = s.at(i);
				n++;
			}
		}
	}
	for(int i=s.size(); i>0; i--){
		for(int j=0; j<4; j++){
			if(s.at(i) == Arr[j]){
				s.at(i) = M[m];
				m++;
			}
		}
	}
	return s;
}
