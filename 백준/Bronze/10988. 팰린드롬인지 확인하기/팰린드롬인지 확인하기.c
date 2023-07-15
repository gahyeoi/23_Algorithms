#include<stdio.h>
#include<string.h>

int main(){

    char word[101] ; // 단어의 길이는 1~100 
    scanf("%s", word) ;

    int check = 1 ; // 반복문 빠져나올 때까지 1이라면 팰린드롬

    for(int i = 0 ; i < strlen(word); i++){
        if(word[i] != word[strlen(word)-1-i]){
            check = 0 ; 
            break ; 
        }
    }

    printf("%d", check) ;

    return 0 ; 
}