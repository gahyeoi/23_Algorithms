// 별 찍기 - 9
#include<stdio.h>

int main(){

    int N ;
    scanf("%d", &N) ; 

    for(int i = 0 ; i < N; i++){
        for(int j = 0; j < i; j++){
            printf(" ") ;
        }
        for(int k = 0; k < 2*N - 2*i - 1; k++){
            printf("*") ;
        }
        printf("\n") ;
    }
    for(int i = N-1; i > 0; i--){
        for(int j = 0; j < i-1; j++){
            printf(" ") ;
        }
        for(int k = 0; k < 2*N - 2*i + 1; k++){
            printf("*") ;
        }
        printf("\n") ;
    }
    
    return 0 ; 
}