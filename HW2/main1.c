#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int a[69]; //global var

void swap(int x,int y) {
    int temp = a[y];
    a[y] = a[x];
    a[x] = temp;
}

void bubl(int u) {
    for (int g = 0 ; g < 6 ; g++) {
        for (int h = 0 ; h < 6; h++) {
            if (a[g+u]<a[h+u]){
                swap(g+u,h+u);
            }
        }
    }
}
int spel(int v,int u) {
    for (int w = 0 ; w < 6 ; w++) {
        if (a[w+u] > 10) {
            break;
        } else { 
            if (v == a[w+u]) {
                v = ( rand() % 10) + 1;
                w = 0;
            }
        }
    }
    return v;
}

int main() {
    FILE* fp;
    fp = fopen("lotto.txt","w+");
    char time_ct[100];
    srand( time(NULL));
    time_t curtime;
    time(&curtime);

    for (int i = 0 ; i <=68 ; i++) {
        a[i] = i+1;
    }
    int n;
    printf("歡迎光臨長庚樂透彩購買機台\n");
    printf("請問您要買幾組樂透彩：");
    scanf("%d",& n);
    printf("已為您購買的 %d 組樂透組合輸出至 lotto.txt\n",n);
    fprintf(fp ,"======== lotto649 =========\n");
    
    strcpy(time_ct ,ctime(&curtime));
    for (int i =0 ; i < (sizeof(time_ct)/sizeof(char)) ; i++) {
        if (time_ct[i] == '\0') {
            time_ct[i-1] = '\0';
            fprintf(fp ,"= %s =\n",time_ct);
            break;
        }
    }
    for (int j = 0 ; j < 67 ; j++) {  //Modern Method
        int k = ( rand() % 67 ) ;
        swap( j,k);
    }
    int u = 0;
    for (int p = 1 ; p <= 5; p++) {
        if (n < p) {
            fprintf(fp ,"[%d]: -- -- -- -- -- -- --\n",p);
        } else {
            fprintf(fp,"[%d]: ",p);
            for (int m = 0 ; m < 6 ; m++) {
                (m < n-1)? bubl(u) : NULL ;
                fprintf(fp ,"%02d ",a[m+u]);
            }
            int v = ( rand() % 10) + 1;
            spel(v,u);
            fprintf(fp ,"%02d\n",v);
            u+=6;
        }
    }
    fprintf(fp ,"======== csie@CGU =========\n");
    fclose(fp);
}
