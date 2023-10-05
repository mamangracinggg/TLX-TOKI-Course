#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int len = s.length();
	for(int i = 0; i < len; i++){
		if(s[i] == '_'){
			s.erase(i, 1);
			s[i] = s[i] - ('a'-'A');
		}else{
			if(s[i] >= 'A' && s[i] <= 'Z'){
				s[i] = s[i] + ('a'-'A');
				s.insert(i,"_");
				len++;
			}
		}
	}
	cout << s << endl;
	return 0;
}
