#include<stdio.h>
#include<string.h>

int main(){

    char agent[5][11] ;
    int found_result[5] ;

    for(int i = 0 ; i < 5; i++){
        scanf("%s", agent[i]) ;
    } 

    int found_num = 0;  
    for(int i = 0 ; i < 5 ; i++){
        if(strstr(agent[i], "FBI")){
            found_result[found_num] = i + 1 ; 
            found_num++;
        }
    }

    if(found_num == 0){
        printf("HE GOT AWAY!\n") ;
    } else {
        for(int i = 0 ; i < found_num; i++){
            if(i == found_num - 1){
                printf("%d", found_result[i]) ;
            } else {
                printf("%d ", found_result[i]) ;
            }
        }
    }

    return 0 ; 
}