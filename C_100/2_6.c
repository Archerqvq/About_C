// 习题2-6 求阶乘序列前N项和
#include <stdio.h>

// 一个计算阶乘的函数
int func(int n){
	int i;
	long long t = 1;
	for(i = 1; i <=n; i++){
		t *= i;
	}
		
	return t;	
}

int main(void){
 	
	int n;
	scanf("%d", &n);
	int i;
	long long sum = 0;
	for(i = 1; i <= n; i++){
		sum += func(i);
	}
	printf("%lld\n",sum);
	

	// printf("%d", func(4));

	return 0;
}

