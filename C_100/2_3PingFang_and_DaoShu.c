// 求平方与倒数序列的部分和
#include <stdio.h>
#include <math.h>
int main(void){

	int m, n;
	double sum = 0.0;
	printf("输入数值m n，且m<=n\n");	
	scanf("%d %d", &m, &n);
	int i;
	
	if(m<=n && m!=0 && n!=0){
		for(i = m; i <= n; i++){
			sum += (double)pow(i, 2) + 1.0/i;
		}
	}

	printf("sum = %.6lf\n",sum);

	return 0;
}