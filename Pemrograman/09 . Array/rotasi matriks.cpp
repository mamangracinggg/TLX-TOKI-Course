#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n + 1][m + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 1; i <= m; i++){
        for(int j = n; j >= 1; j--){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
