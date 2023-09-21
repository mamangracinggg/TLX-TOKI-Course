#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    int num, hitungKemunculan[1005];
    memset(hitungKemunculan, 0, sizeof(hitungKemunculan)); //mengisi seluruh index hitung dengan nilai 0
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        hitungKemunculan[num]++;
    }
    int modus = 0, ans = 0;
    for(int i = 1; i <= 1000; i++){ //akan didapat i nilai terbesar dan juga kemunculan terbanyak
        if(modus <= hitungKemunculan[i]){ //misal 1 3 2 4 1 4 , i=1 muncul 2 kali namun karena looping naik ke atas maka jawabannya adalah i=4 yang juga muncul 2 kali namun lebih besar
            modus = hitungKemunculan[i];
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
