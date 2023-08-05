#include<stdio.h>
#include<string.h>

int main(){

    char line[1000001] ; 
    fgets(line, 1000001, stdin) ; 
    if(line[strlen(line)-1] == '\n')
        line[strlen(line)-1] = '\0' ;

    char * ptr = &line[0] ; 
    int isInWord = 0 ; 
    int count = 0 ; 
    while(*ptr != 0x0){
        if(*ptr != ' ')
            isInWord = 1 ; 
        
        if(*ptr == ' ' && isInWord == 1){
            count++ ;
            isInWord = 0 ; 
        }

        ptr++ ;
    }
    if(isInWord == 1)
        count++ ; 
    
    printf("%d", count) ;
    
    return 0 ; 
}