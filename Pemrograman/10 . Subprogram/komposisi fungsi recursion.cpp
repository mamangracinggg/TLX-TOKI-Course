#include<stdio.h>
#include<math.h>

int f(int a, int b, int x, int k){
    if(k > 0){
         k = k - 1;
         x = abs(a*x + b);
         return f(a, b, x, k);
    }else{
        return x;
    }
}

int main(){
    int a, b, k, x;
    scanf("%d %d %d %d", &a, &b, &k, &x);
    f(a, b, x, k);
    printf("%d\n", f(a,b,x,k));
    return 0;
}
