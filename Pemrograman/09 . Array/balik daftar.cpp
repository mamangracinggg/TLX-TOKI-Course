#include <stdio.h>
int main(){
    int a[105];
    int i = 0;
    while(scanf("%d", &a[i]) != EOF){
        i++;
    }
    for(int j = i - 1; j >= 0; j--){
        printf("%d\n", a[j]);
    }
    return 0;
}
