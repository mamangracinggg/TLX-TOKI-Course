#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int b[n];
    int ans = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
        ans += b[i];
    }
    printf("%d\n", ans);
    return 0;
}
