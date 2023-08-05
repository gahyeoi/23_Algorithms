#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int isPalindrome(char * word, int length){

    // 거꾸로 뒤집은 문자열 제작 후 
    char revised[length+1] ;
    int index = 0 ;
    for(int j = length-1; j >= 0; j--){
        revised[index] = word[j];
        index++;
    }
    revised[strlen(revised)] = '\0' ;

    // strcmp를 사용하여 동일한 경우 리턴 1해줒,. 
    if(strcmp(word, revised) == 0)
        return 1 ; 
    else 
        return 0 ; 
    
}
int main(){
    
    int N ;
    scanf("%d", &N) ; 
    
    for(int i = 0 ; i < N ; i++){
        
        // 숫자 입력받기 
        char number[7] = "" ;
        scanf("%s", number) ; 
        int length = strlen(number) ; 

        // Revised number 만들기 
        char revised_number[7] = "" ; 
        int index = 0 ;
        for(int j = length-1; j >= 0; j--){
            revised_number[index] =  number[j] ;  
            index++;
        }
        
        // 기존 숫자와 revised 처리된 숫자를 더한 후, 문자열로 변경하기 
        int s = atoi(number) + atoi(revised_number) ; 
        char sum[14] = "" ;
        sprintf(sum, "%d", s) ; ;

        if(isPalindrome(sum, strlen(sum)))
            printf("YES\n") ;
        else    
            printf("NO\n") ;
    }
    return 0 ; 
}