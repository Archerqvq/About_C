// 本题要求编写程序，计算4个整数的和与平均值。题目保证输入与输出均在整型范围内。
#include <stdio.h>
int main(void){
	int a1, a2, a3, a4;
	scanf("%d %d %d %d",&a1, &a2, &a3, &a4);
	printf("Sum =  %d, Average = %.1lf\n",a1 + a2 + a3 + a4, (double)(a1 + a2 + a3 + a4) / 4.0);
	return 0;
}