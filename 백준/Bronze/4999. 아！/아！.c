#include<stdio.h>
#include<string.h>

int main(){

    char j[1001] ;
    char d[1001] ;

    fgets(j, 1001, stdin) ;
    fgets(d, 1001, stdin) ;

    if(strlen(j) >= strlen(d)){
        printf("go") ;
    } else {
        printf("no") ;
    }

    return 0 ;
}