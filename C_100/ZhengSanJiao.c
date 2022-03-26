#include <stdio.h>
int main(void){
	
	for(int col = 0; col < 4; col++){
	
		for(int spa = 0; spa < 4 - col; spa++){
			printf(" ");
		}
		
		for(int star = 0; star < col + 1; star++){
			printf("* ");
		}

		printf("\n");
	}
	return 0;
}