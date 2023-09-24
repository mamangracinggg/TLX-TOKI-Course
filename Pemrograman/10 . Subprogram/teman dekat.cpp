#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int pangkat(int a, int b){
	int ans = 1;
	for(int i = 0; i < b; i++){
		ans = ans * a;
	}
	return ans;
}

int main(){
	int n, d;
	scanf("%d %d", &n, &d);
	int x[n], y[n];
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	int t[n][n];
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			t[i][j] = pangkat(abs(x[j] - x[i]), d) + pangkat(abs(y[j] - y[i]), d);
		}
	}
	int terkecil = t[0][1];
	int terbesar = t[0][1];
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			terkecil = min(terkecil, t[i][j]);
			terbesar = max(terbesar, t[i][j]);
		}
	}
	printf("%d %d\n", terkecil, terbesar);
	return 0;
}

/*
n = 3

idx 0 1 2
0     * *
1       *
2
t[0][1] t[0][2] t[1][2]

cari yg terkecil dan terbesar
terkecil = t[0][1]
bandingkan terkecil  dgn  t[0][1] = terkecil
           terkecil  dgn  t[0][2] = terkecil
           terkecil  dgn  t[1][2] = terkecil

*/
