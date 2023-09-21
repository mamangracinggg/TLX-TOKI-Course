#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int bil = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i ; j++){
			printf("%d", bil);
			bil++;
			bil = bil % 10;
		}
		printf("\n");
	}
	return 0;
}
