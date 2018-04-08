#include<stdio.h> 

int main(){ 
    int i, N; //i, N을 선언  
    scanf("%d", &N); //단을 입력받음 
    for(i=1; i<10; i++) { //for문을 이용해 1부터 9까지 곱셈 사용 
        printf("%d * %d = %d\n",N,i,N*i); //N과 i를 사용해 구구단을 구함 
    } 
}

