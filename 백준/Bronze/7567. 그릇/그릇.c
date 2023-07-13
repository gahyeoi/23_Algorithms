#include <stdio.h>
#include <string.h>

int main(){

    int height = 10 ; //  첫 그릇은 무조건 10cm를 차지하므로 
    char dishes[51] ; // 문자열의 길이는 3~50 사이

    scanf("%s", dishes);

    char * prev = &dishes[0] ;
    char * curr = &dishes[1] ;

    while(*curr != '\0'){
            
        if(*curr == *prev){
            height += 5 ; 
        } else {
            height += 10 ;
        }

        prev = curr ; 
        curr = curr + 1 ; 
    }

    printf("%d\n", height) ;

    return 0 ; 
}