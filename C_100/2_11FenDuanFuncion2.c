/*
*  要求分段函数f(x)的值：可在头文件中包含 math.h ，并调用 sqrt 函数求平方根，调用 pow 函数求幂。
*/
#include <stdio.h>
#include <math.h>
int main(void){
	
	double x;
	scanf("%lf", &x);
	
	if(x >= 0){
		printf("f(%.2lf) = %.2lf", x, pow(x, 0.5));
	}else{
		printf("f(%.2lf) = %.2lf", x, pow(x+1, 2) + 2.0 * x +1 / x);
	}
	
	return 0;
}