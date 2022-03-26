/* 用*号输出一个四行倒三角 */
#include <stdio.h>
int main(void){
	// 解法，内嵌循环(行循环里内嵌列循环)
	// 外层循环，行数
	for(int row = 1; row <= 4; row++){

		// 内层循环1，空格列数，且在每列输出空格
		for(int spa = 1; spa <= row - 1; spa++){
			printf(" ");
		}


		// 内层循环2，*号列数，且在每列输出*号
		for(int col = row; col <= 4; col++){
			printf("* ");
		}

		// 每行结束需要换行
		printf("\n");
	}	
	return 0;
}