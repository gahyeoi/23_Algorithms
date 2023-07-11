#include <stdio.h>

int main(){
    
    int a, b ; 
    scanf("%d %d", &a, &b) ;
    
    int ones = b % 10 ; 
    int tens = (b % 100) / 10  ;
    int hundreds = b / 100 ; 
    
    printf("%d\n", ones*a) ;
    printf("%d\n", tens*a) ;
    printf("%d\n", hundreds*a) ;
    
    int result = ones*a + 10*(tens*a) + 100*(hundreds*a) ;
    
    printf("%d", result);
    
    return 0 ; 
}