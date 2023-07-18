#include<stdio.h>

int findGCD(int a, int b){

    // 유클리드 호제법 응용 (두 수의 차를 이용하여 약수 구하기)
    int GCD ; 
    int diff ; 

    if(a > b){
        diff = a - b ;
    } else if(a == b) {
        diff = b ;
    } else {
        diff = b - a ;
    }

    for(int i = 1 ; i <= diff; i++){
        if(diff % i == 0){
            if(a % i == 0 && b % i == 0){
                GCD = i ; 
            }
        }
    }

    return GCD ; 
}

int findLCM(int a, int b){

    return (a*b)/findGCD(a, b) ; 
}

int main(){

    int T ; // 테스트 케이스 개수 
    scanf("%d", &T) ; 
    
    for(int i = 0 ; i < T ; i++){
        int a, b ;
        scanf("%d %d", &a, &b) ;

        int LCM, GCD ; // LCM 최소공배수 GCD 최대공약수 
       
        GCD = findGCD(a, b) ;
        LCM = findLCM(a, b) ;

        printf("%d %d\n", LCM, GCD);
    }

    return 0 ; 
}