#include <stdio.h>
int main(){
    char a[10005];
    while(scanf("%[^\n]", a) != EOF){
        getchar(); //menangkap /n atau newline supaya tidak terbaca lagi di scanf berikutnya yang dapat menimbulkan innfinite loop
        printf("%s\n", a);
    }
    return 0;
}
