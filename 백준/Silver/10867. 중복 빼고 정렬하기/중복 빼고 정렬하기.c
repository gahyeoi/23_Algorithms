#include<stdio.h>

int isExist(int * array, int size, int num){ // 배열에 특정 숫자가 존재하는지 확인하는 함수 

    for(int i = 0 ; i < size; i++){
        if(array[i] == num){
            return 1 ; 
        }
    }
    return 0 ; 
}

void sortArray(int * array, int size){
    
    for(int i = 0 ; i < size-1; i++){
        for(int j = i + 1 ; j <size; j++){
            if(array[i] > array[j]){
                int tmp = array[j] ; 
                array[j] = array[i] ;
                array[i] = tmp ; 
            } 
        }
    }
}

int main(){

    int N ; 
    scanf("%d\n", &N) ;
    int numbers[N] ;
    int index = 0 ; 

    for(int i = 0 ; i < N ; i++){
        int tmp ; 
        scanf("%d", &tmp) ;
        
        if(!isExist(numbers, index, tmp)){
            numbers[index] = tmp ; 
            index++ ;
        }
    } 

    sortArray(numbers, index) ;

    for(int i = 0 ; i < index; i++){
        printf("%d ", numbers[i]) ;
    }

    return 0 ; 
}