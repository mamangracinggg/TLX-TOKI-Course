#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if((n % 2 == 0) && (n > 0)) printf("%d\n", n);
    return 0;
}
