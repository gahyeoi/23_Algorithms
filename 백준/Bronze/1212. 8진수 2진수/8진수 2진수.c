#include<stdio.h>
#include<string.h>

int main(){
    
    char oct2binfirst[8][4] = {"", "1", "10", "11", "100", "101", "110", "111"} ;
    char oct2bin[8][4] = {"000", "001", "010", "011", "100", "101", "110", "111"} ;

    char oct[333335] ; 
    scanf("%s", oct) ; 

    char bin[1000003] ; 
    int length = strlen(oct) ;

    if(length == 1 && oct[0] -48 == 0){
        printf("0") ; 
    } else {
        for(int i = 0 ; i < length; i++){
        int index = oct[i] -  48 ;
        if(i == 0){
            printf("%s", oct2binfirst[index]) ;
        } else {
            printf("%s", oct2bin[index]) ; 
        }
    }
    }

    return 0 ; 
}