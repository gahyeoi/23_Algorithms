#include<stdio.h>
#include<string.h>

int main(){

    char id[54] ; 
    fgets(id, 54, stdin) ; 
    id[strlen(id)-1] = 0x0 ; 

    strcat(id, "?\?!");

    printf("%s", id) ;

    return 0 ;
}