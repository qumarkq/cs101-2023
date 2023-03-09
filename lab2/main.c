#include <stdio.h>
#include <string.h>

typedef struct employee {
    int em_id ;
    char em_name[10] ;
    int em_age ;
    char em_phone[12] ;
    float em_salary ;
} employee_t ;

void employee_info(employee_t my_emp) {
    printf("em_id is %d\n",my_emp.em_id) ;
    printf("em_name is %s\n",my_emp.em_name) ;
    printf("em_age is %d\n",my_emp.em_age) ;
    printf("em_phone is %s\n",my_emp.em_phone) ;
    printf("em_salary is %.2f\n",my_emp.em_salary) ;
}

int main() {
    
    printf("size of employee_t is %d\n",sizeof(employee_t) ) ;
    
    employee_t my_emp ;
    my_emp.em_id = 52 ;
    strcpy(my_emp.em_name,"IU Lee") ;
    my_emp.em_age = 18 ;
    strcpy(my_emp.em_phone,"0937123456") ;
    my_emp.em_salary = 1000.30 ;
    employee_info(my_emp) ;

    return 0 ;
}
