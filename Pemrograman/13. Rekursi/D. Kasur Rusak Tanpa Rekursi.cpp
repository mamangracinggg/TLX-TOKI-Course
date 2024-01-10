#include <stdio.h>
#include <string.h>

int main(){
    char s[105];
    scanf("%s", s);
    char depan, belakang;
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        depan = s[i];
        belakang = s[len-1-i];
        if(depan != belakang){
            printf("BUKAN\n");
            return 0;
        }
    }
    if(depan == belakang)printf("YA\n");
    return 0;
}
