#include<stdio.h> 

int main(){ 
    int i, N; //i, N�� ����  
    scanf("%d", &N); //���� �Է¹��� 
    for(i=1; i<10; i++) { //for���� �̿��� 1���� 9���� ���� ��� 
        printf("%d * %d = %d\n",N,i,N*i); //N�� i�� ����� �������� ���� 
    } 
}

