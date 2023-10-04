#include <stdio.h>
#include <cstring> //strlen
/*
	a = 0, b = 1, c = 2, ..., y = 24, z = 25
	s[i] = y = 121(ASCII)
	y - 'a' = 121 - 97 = 24
	k = 1
	24 + 1 = 25 % 26 = 25
	25 + 'a' = 25 + 97 = 122 = z
*/
int main(){
	char s[105];
	scanf(" %s", &s);
	int k;
	scanf(" %d", &k);
	int len = strlen(s);
	for(int i = 0; i < len ; i++){
		s[i] = s[i] - 'a';
		s[i] = (s[i] + k) % 26;
		s[i] = s[i] + 'a';
		printf("%c", s[i]);
	}
	return 0;
}
