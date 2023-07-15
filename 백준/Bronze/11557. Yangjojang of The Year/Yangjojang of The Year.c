#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int T ; 
    scanf("%d", &T) ; 

    for(int i = 0 ; i < T ; i++){
        int N ; 
        char max_uni[20] ; 
        int max_drinks = 0 ;
        scanf("%d\n", &N) ;

        for(int j = 0 ; j < N; j++){
            char line[30] ; 
            fgets(line, 30, stdin) ;
            line[strlen(line)-1] = 0x0 ; 
            
            char * uni_name = strtok(line, " ") ;
            char * drinks = strtok(NULL, " ") ;
        
            if (atoi(drinks) > max_drinks){
                max_drinks = atoi(drinks); 
                strcpy(max_uni, uni_name) ;
            }
        }

        printf("%s\n", max_uni) ;
    }

    return 0 ; 
}