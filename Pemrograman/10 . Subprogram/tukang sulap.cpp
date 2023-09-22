#include <stdio.h>
int n, bola[3][1001], t;

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= 2; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &bola[i][j]);
		}
	}
	scanf("%d", &t);
	char p, q;
	int x, y;
	for(int i = 1; i <= t; i++){
		scanf(" %c", &p); //add space before %c to skip \n or space in previous scanf
		scanf("%d", &x);
		scanf(" %c", &q); //add space before %c to skip \n or space in previous scanf
		scanf("%d", &y);
		int a = p - 64; //jika p = A, maka nilai a = 1(baris 1)
		int b = q - 64; //jika q = B, maka nilai b = 2(baris 2)
		swap(bola[a][x], bola[b][y]);
	}
	for(int i = 1; i <= 2; i++){
		for(int j = 1; j <= n; j++){
			printf("%d ", bola[i][j]);
		}
		printf("\n");
	}
	return 0;
}
