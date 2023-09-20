#include <stdio.h>
int main(){
    int n, ans = 0;
    while(scanf("%d", &n) != EOF){
        ans += n;
    }
    printf("%d\n", ans);
    return 0;
}
