#include<stdio.h>

void primeFact(int x){
    int i = 2;
    while(i <= x){
        int pangkat = 0;
        if(x % i == 0){
            while(x % i == 0){
                pangkat++;
                x = x / i;
            }
        }
        
        if(pangkat > 0){ //selama i adalah faktor prima dari x
            if(pangkat > 1){ 
                printf("%d^%d",i, pangkat);
            }else if(pangkat == 1){ 
                printf("%d",i);
            }
            if(x > 1){ //selama x belum 1 maka masih ada faktor prima lain
                printf(" x ");
            }
        }
        i++;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    primeFact(n);
    return 0;
}
