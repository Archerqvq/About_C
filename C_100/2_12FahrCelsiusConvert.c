/*
输入2个正整数lower和upper（lower≤upper≤100），
请输出一张取值范围为[lower，upper]、
且每次增加2华氏度的华氏-摄氏温度转换表。
温度转换的计算公式：C=5×(F−32)/9，其中：C表示摄氏温度，F表示华氏温度。
*/

#include <stdio.h>
int main(void){
	
	int lower, upper;
	printf("输入两个整数作为华氏温度：");
	scanf("%d %d", &lower, &upper);
	
	if(lower<=upper && upper<=100){
		printf("Fahr Celsius\n");
		for(int x = lower; x <= upper; x+=2){
			printf("%d   %.2lf\n", x, (double)(5.0*(x-32.0)/9.0));
		}
	}else{
		printf("数据无效，请重新输入");
	}

	return 0;
}