#include<stdio.h>

int main(){

    int a = 0, b = 0, c = 0, prize = 0 ; 
    scanf("%d %d %d", &a, &b, &c) ;
    
    if(a == b && b == c){ // 세 개 다 동일한 경우 
        prize = 10000 + a*1000 ; 
    } else if(a != b && b != c && a != c){ // 세 개 다 다른 경우 
        if(a > b && a > c){
            prize = a*100 ;
        } else if (b > a && b > c){
            prize = b*100 ;
        } else {
            prize = c*100 ; 
        }
    } else {
        if((a == b && b != c) || (a == c && b != c)){
            prize = 1000 + a*100 ;
        } else {
            prize = 1000 + b*100 ; 
        }
    }

    printf("%d", prize) ;
    return 0 ; 
}