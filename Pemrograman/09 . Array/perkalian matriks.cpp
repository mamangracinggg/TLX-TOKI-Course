#include<stdio.h>
int main(){
	int n, m, p;
	scanf("%d %d %d", &n, &m, &p);
	int a[101][101], b[101][101], c[101][101];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	int simpan;
	for(int i = 1; i <= n; i++){ 
		for(int j = 1; j <= p; j++){
			simpan = 0;
			for(int k = 1; k <= p; k++){
				simpan += a[i][k] * b[k][j];
			}
			c[i][j] = simpan;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= p; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
