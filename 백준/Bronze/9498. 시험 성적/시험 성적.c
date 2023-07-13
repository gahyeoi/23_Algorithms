/*
    90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
*/

#include<stdio.h>

int main(){
    
    int score ; 
    scanf("%d", &score) ;
    
    if(90 <= score && score <= 100){
        printf("A") ;
    } else if(80 <= score){
        printf("B") ;
    } else if(70 <= score){
        printf("C") ;
    } else if(60 <= score){
        printf("D") ;
    } else {
        printf("F") ;
    }
    
    return 0 ; 
}