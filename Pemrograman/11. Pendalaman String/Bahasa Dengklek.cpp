#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){ //jika karakter s[i] adalah lower case
			s[i] = s[i] - ('a' - 'A');
		}else if(s[i] >= 'A' && s[i] <= 'Z'){//jika karakter s[i] adalah upper case
			s[i] = s[i] + ('a' - 'A');
		}
	}
	
	cout << s << endl;
	
	return 0;
}
