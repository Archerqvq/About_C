// 本题要求编写程序，计算交错序列 1 - 2/3 + 3/5 - 4/7 + 5/9 - 6/11 +... 的前N项之和
#include <stdio.h>
int main(void){
	
	int n;
	int odd = 1; 	// 奇数
	int even = 1;	// 偶数
	int temp = 1;
	double sum = 0.0; 
	printf("输入N项：\n");
	scanf("%d", &n);

	for(int x = 1; x <= n; x++){
		sum += (double)odd/even * temp;	
		odd++;
		even+=2;
		temp = -temp;
	}

	printf("%.3lf", sum);
	
	return 0;
}