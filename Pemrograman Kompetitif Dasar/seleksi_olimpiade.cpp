#include <bits/stdc++.h>
using namespace std;
int t, n, m;

int main()
{
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d", &n, &m);
        string checkID;
        cin >> checkID; //scanf("%s", checkID);
        string id[n];
        int s1[n], s2[n], s3[n];
        int simpan;
        for(int i = 0; i < n; i++){
            cin >> id[i]; //scanf("%s", &id[i]);
            scanf("%d %d %d", &s1[i], &s2[i], &s3[i]);
            if(checkID == id[i]){
                simpan == i;
            }
        }
        
        int hitung = 0;
        for(int i = 0; i < n; i++){
            if(checkID == id[i]){
                continue;
            }
            if(s3[simpan] > s3[i]){
                hitung++;
            }else if(s3[simpan] == s3[i]){
                if(s2[simpan] > s2[i]){
                    hitung++;
                }else if(s2[simpan] == s2[i]){
                    if(s1[simpan] > s1[i]){
                        hitung++;
                    }
                }
            }
        }
        
        if(hitung >= (n - m)){
            printf("YA\n");
        }else{
            printf("TIDAK\n");
        }
        
    }

    return 0;
}


