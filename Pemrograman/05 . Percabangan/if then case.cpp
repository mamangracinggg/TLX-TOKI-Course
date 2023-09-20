#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if((n - 10) < 0){
        printf("satuan\n");
    }else if((n - 10) >= 0 && (n - 100) < 0){
        printf("puluhan\n");
    }else if((n - 100) >= 0 && (n - 1000) < 0){
        printf("ratusan\n");
    }else if((n - 1000) >= 0 && (n - 10000) < 0){
         printf("ribuan\n");
    }else if((n - 10000) >= 0 && (n - 100000) < 0){
        printf("puluhribuan\n");
    }
    return 0;
}
