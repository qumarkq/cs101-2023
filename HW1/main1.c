#include <stdio.h>

int main() {
    
    char a[] = "AABBBCCCCddd";
    int len = (sizeof(a) / sizeof(a[0]) ) ;
    
    char flag = a[0] ;
    int count = 0 ;
    
    for (int i = 0 ; i <= len ;i++) {
        if (a[i] == flag) {
            count +=1;
        } else {
            printf("%c%d",flag,count);
            flag = a[i] ;
            count = 1 ;
        }
    }
    return 0;
}


//#include <stdio.h>

//int main() {
    
    //char a[] = "AABBBCCCCddd";
    //int len = (sizeof(a) / sizeof(a[0]) )-1 ;
    
    //char flag = a[0] ;
    //int count = 1 ;
    //for (int i = 0 ; i <= len ;i++) {
    //    if (count == 1) {
     //       printf("%c",a[i]);
     //   }
     //   if (a[i+1] != a[i] ) {
     //           printf("%d",count);
    //            count = 1;
   //     } else {
  //          count++;
  //      }
  //  }
  //  return 0;
//}
