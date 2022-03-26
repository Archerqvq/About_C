#include <stdio.h>
#include <math.h>
int main(void){

	int n;
	printf("plz input a number:");
	scanf("%d",&n);

	for(int x = 0; x <= n; x++){
		printf("pow(3,%d) = %d\n",x, (int)pow(3,x));
	}
	return 0;
}