#include <stdio.h>
double func(int n){
	double t = 1.0;
	for(int i = 1; i <= n; i++){
		t *= i;
	}
	
	return t;
}

/*
double func(int x){
	double result = 1.0;
	for(int n = 1; n <= x; n++){
		result *= n;
	}
	return result;
}
*/

int main(void){
	int m,n;
	printf("从n个数中取出m个数()");
	scanf("%d %d",&m, &n);
	double result = func(n)/(func(n-m)*func(m));
	printf("result = %.0lf\n",result);
	return 0;
}