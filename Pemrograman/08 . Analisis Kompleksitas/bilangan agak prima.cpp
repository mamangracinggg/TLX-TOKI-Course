#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        int hitung = 0;
        for(int j = 1; j * j <= arr[i]; j++){
            if(arr[i] % j == 0){
                hitung+=2;
            }
        }
        if(hitung <= 4){
            printf("YA\n");
        }else{
            printf("BUKAN\n");
        }
    }
    return 0;
}
