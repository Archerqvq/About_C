// 练习3-2 计算符号函数的值
#include <stdio.h>
int main(void){
	int n; // 输入值
	printf("输入一个值，计算符号函数：");
	scanf("%d", &n);

	if(n == 0){
		printf("sign(%d) = 0", n);
	}
	else if(n > 0){
		printf("sign(%d) = 1",  n);
	}else if(n < 0){
		printf("sign(%d) = -1",  n);
	}
	
	return 0;
}