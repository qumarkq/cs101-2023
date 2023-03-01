#include <stdio.h>

int main() {
    char a[] = "A3B2C4A9" ;
    int len = (sizeof(a)/sizeof(a[0]) )-1 ;
    
    for (int i = 0;i < len ;i++) {
        for (int j = 0 ; j < a[i+1]-'0' ;j++) {
            printf("%c",a[i]);
        }
        i++ ;
    }
    return 0;
}
