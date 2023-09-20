#include <stdio.h>
int main(){
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int a = x1 - x2;
    int b = y1 - y2;
    if(a < 0){
        a *= -1;
    }
    if(b < 0){
        b *= -1;
    }
    printf("%d\n", a + b);
    return 0;
}
