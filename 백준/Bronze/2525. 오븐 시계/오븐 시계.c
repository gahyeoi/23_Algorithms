#include <stdio.h>

int main(){

    int curr_h, curr_m, mins ; // 현재 시각의 시, 분 그리고 요리에 사용되는 시간(분)
    scanf("%d %d", &curr_h, &curr_m) ;
    scanf("%d", &mins) ;

    int end_h, end_m ; 

    end_h = curr_h + mins/60 ; 
    end_m = curr_m + mins % 60 ; 

    if(end_m >= 60){
        end_m -= 60 ; 
        end_h++ ;
    }

    if(end_h >= 24){
        end_h -= 24 ; 
    }

    printf("%d %d", end_h, end_m) ;

    return 0 ;
}