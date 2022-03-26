//  本题要求编写程序，计算序列 1 + 1/3 + 1/5 + ... 的前N项之和。
#include <stdio.h>
int main(void){

	int n;
	int m = 1; // 底数
	double sum = 0;

	printf("输入数字n，计算1 + 1/3 + 1/5 + ... 的前N项之和：");
	scanf("%d", &n);
	
	// 重复，有规律的操作... 
	// 将N项和累加
	for(int x = n; x > 0; x--){
		sum += 1.0/m;
		m+= 2; // 每一次循环，m增加2，直到循环跳出
	}
	
	printf("sum = %.6lf", sum);
	return 0;
}