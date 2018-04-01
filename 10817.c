#include <stdio.h>

int main(){

	int num[3] = {0, }, i, j, temp;

	for(i=  0; i < 3; i++){

		scanf("%d", &num[i]);

	}

	for(i = 0; i < 3; i++){

		for(j = 0; j < 2; j++){

			if(num[j] < num[j + 1]){


				temp = num[j + 1];

				num[j + 1] = num[j];

				num[j] = temp;

			}

		}

	}


	printf("%d", num[1]);
}

