/* 本题要求编写程序，计算序列 1 + 1/2 + 1/3 + ... 的前N项之和。 */
#include <stdio.h>
int main(void){
    
	int n;
	double sum = 0; 
	printf("输入一个数字n，计算1+1/2+1/3+...的前N项之和：");
	 scanf("%d", &n);
	
	for(int num = n; num > 0; num--){
		sum += 1.0/n;
	}
	printf("和为：%.2lf", sum);
	 return 0;
}