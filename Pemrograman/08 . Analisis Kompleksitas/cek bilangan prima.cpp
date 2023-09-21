#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        bool prima = true;
        for(int j = 2; j * j<= arr[i] - 1; j++){
            if(arr[i] % j == 0){
                prima = false;
                break;
            }
        }
        if(prima == true){
            printf("YA\n");
        }else{
            printf("BUKAN\n");
        }
    }
    
    return 0;
}
