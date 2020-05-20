#include <bits/stdc++.h>

using namespace std;

char c[255], c2[255];

void decode(){
	string s;
	cin >> c;
	for(int i = 0; i < (int)strlen(c); i++){
		if(ispunct(c[i])){
			continue;
		} else{
			s += c[i];
		}
	}
	int t = stoi(s);
	cin >> c2;
	string s2;
	for(int i = 0; i < (int)strlen(c2); i++){
		if(ispunct(c2[i])){
			continue;
		} else{
			s2 += c2[i];
		}
	}
	int t2 = stoi(s2);
	cout << t << " + " << t2 << "\n";
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t = 4;
	while(t--){
		decode();
	}
	return 0;
}
