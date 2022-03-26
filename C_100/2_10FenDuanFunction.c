/*
*   计算分段函数，根据函数描述，输入一个值，输出一个结果
*/
#include <stdio.h>
int main(void){
	double x; // 声明变量接收一个从键盘输入的浮点数
	scanf("%lf", &x);
	// 除数不能为0，对输入整数进行判断
	if(x==0){
		printf("f(%.1lf) = %.1lf\n", x, x);
	}else{
		printf("f(%.1lf) = %.1lf\n", x, 1/x);
	}
	return 0;
}