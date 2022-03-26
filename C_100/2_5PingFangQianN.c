// 习题2-5 求平方根序列前N项和
#include <stdio.h>
#include <math.h>
int main(void){
	
	int n;
	int x;
	double sum = 0.0;
	printf("求平方根的前n项和，输入数字n：");
	scanf("%d", &n);
	
	for(x = 1; x <= n; x++){
		sum += sqrt((double)x);
	}

	printf("sum = %.2lf \n",sum);

	return 0;
}