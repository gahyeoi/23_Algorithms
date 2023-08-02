#include<stdio.h>

int main(){

    int totalPassengersPerStation[10] ; // 각 역마다 총 인원수 
    int total = 0 ; 

    for(int i = 0 ; i < 10 ; i++){
        int alighted, boarded ; // 내린 사람 및 탄 사람 
        scanf("%d %d", &alighted, &boarded) ;
        total -= alighted ; 
        total += boarded ; 
        totalPassengersPerStation[i] = total ; 
    }

    // maximum 찾기 
    int max = totalPassengersPerStation[0] ;
    for(int i = 1 ; i < 10; i++){
        if(totalPassengersPerStation[i] > max)
            max = totalPassengersPerStation[i] ;
    }

    // maximum 출력하기
    printf("%d", max) ; 
    
    return 0 ; 
}