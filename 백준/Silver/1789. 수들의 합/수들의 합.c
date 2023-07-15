#include<stdio.h>

int main(){

    long S, N ; 
    scanf("%ld", &S) ; 

    long sum = 0 ; 
    N = 1 ; 

    while(sum < S){

        sum = sum + N ; 

        if(sum == S){
            break ;
        }

        if(sum > S){
            N--;
            break ;
        }
        
        N++;

    }
    

    printf("%ld", N) ;

    return 0 ; 
}