#include <stdio.h>

int main() {
    char a[] = "ABCabcABC" ;
    int shift = 4 ;
    int len = (sizeof(a)/ sizeof(a[0]) )-1 ;
    
    printf("%s\n",a) ;
    printf("%d\n",shift) ;
    
    for (int i = shift ;i < len ;i++) {
        printf("%c",a[i]);
    }
    for (int j = 0 ;j < shift ;j++) {
        printf("%c",a[j]);
    }
    return 0 ;
}
