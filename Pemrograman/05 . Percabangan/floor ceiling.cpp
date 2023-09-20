#include <stdio.h>
#include <math.h>
int main(){
    double n;
    scanf("%lf", &n);
    int ans = trunc(n); 
    if(n == ans){ //jika masukan n adalah bilangan bulat 
        printf("%d %d\n", ans, ans);
    }else if(n > 0){
        printf("%d %d\n", ans, ans + 1);
    }else if(n < 0){
        printf("%d %d\n", ans - 1, ans);
    }
    return 0;
}
