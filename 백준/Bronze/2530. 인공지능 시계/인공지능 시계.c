#include <stdio.h>

int main(){

    int curr_h, curr_m, curr_s, cooking_seconds ; 
    scanf("%d %d %d", &curr_h, &curr_m, &curr_s) ; 
    scanf("%d", &cooking_seconds) ;

    int end_h, end_m, end_s ; 
    end_h = curr_h + cooking_seconds / 3600 ; 
    end_m = curr_m + (cooking_seconds - (cooking_seconds/3600) * 3600) / 60 ;    
    end_s = curr_s + cooking_seconds % 60 ; 

    if(end_s >= 60){
        int add_m = end_s / 60 ; 
        end_s -= 60 * add_m ; 
        end_m += add_m ; 
    }

    if(end_m >= 60){
        int add_h = end_m / 60 ; 
        end_m -= 60 * add_h ; 
        end_h += add_h ;
    }   

    if(end_h >= 24){
        end_h -= 24 * (end_h/24) ; 
    }
    
    printf("%d %d %d", end_h, end_m, end_s) ;

    return 0 ; 
}