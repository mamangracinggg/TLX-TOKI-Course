#include<stdio.h>
// ret = 0 + 0 temp = 123
// ret = 0 + 3 = 3  temp = 12
// ret = 30 + 2 = 32 temp = 1
// ret = 320 + 1 =  321 temp = 0

int reverse(int x){
    int temp = x;
    int ret  = 0;

    while (temp > 0) {
        ret  = (ret * 10) + (temp % 10); //(*10 memberi tempat untuk digit berikutnya)(%10 untuk mengambil digit paling belakang)
        temp = temp / 10; // untuk menghapus digit paling belakang
    }

    return ret;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int x = reverse(a);
    int y = reverse(b);
    printf("%d\n", reverse(x + y));    
    return 0;
}
