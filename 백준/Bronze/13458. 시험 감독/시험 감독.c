#include<stdio.h>

int main(){

    int N ; 
    scanf("%d\n", &N) ; // N은 시험장의 개수 

    long total_supervisor = 0; // 시험을 감독하게 되는 totatl supervisor 
    long students[N] ; 

    for(int i = 0 ; i < N; i++){
        scanf("%ld", &students[i]) ;
    }

    long B, C ; // 총감독관은 한 시험장에서 감시할 수 있는 응시자의 수가 B명 | 부감독관은 한 시험장에서 감시할 수 있는 응시자의 수가 C명
    scanf("%ld %ld", &B, &C);

    for(int i = 0 ; i < N ; i++){
        total_supervisor++ ; // 총 감독관은 꼭 한 명씩 존재해야 하니까 
        long people = students[i] - B ; 
        
        if(people > 0){
            total_supervisor += people / C ; 
            if(people % C > 0)
                total_supervisor++ ;
        }
    }

    printf("%ld", total_supervisor) ;
    return 0 ; 
}