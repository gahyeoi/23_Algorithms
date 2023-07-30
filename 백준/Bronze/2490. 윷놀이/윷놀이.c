#include<stdio.h>

int main(){

    for(int i = 0 ; i < 3; i++){
        int check = 0 ; 
        int yut[4] ; 
        for(int j = 0; j < 4 ; j++){
            scanf("%d", &yut[j]) ;
            if(yut[j] == 0)
                check++ ; 
        }
        switch (check)
        {
        case 0:
            printf("E\n") ; 
            break ;
        case 1:
            printf("A\n") ; 
            break ; 
        case 2:
            printf("B\n") ; 
            break ; 
        case 3:
            printf("C\n") ; 
            break ; 
        case 4:
            printf("D\n") ; 
            break ;
        
        default:
            break;
        }
    }

    return 0 ; 
}