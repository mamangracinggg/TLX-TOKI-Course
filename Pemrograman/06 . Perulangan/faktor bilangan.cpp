#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i = n;
    while(n >= 1){
        if(n % i == 0) printf("%d\n", i);
        i --; 
    }
    return 0;
}
