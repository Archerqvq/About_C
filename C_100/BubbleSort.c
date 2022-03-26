#include <stdio.h>
int main(void){

	int a[5]; 
	int n;
	int x;
	int y;
 	int temp;

	printf("输入五个数字进行排序：");
	for(n = 0; n < 5; n++){
		scanf("%d",&a[n]);
	}

	for(x = 0; x < n-1; x++){
		for(y = 0; y < n-1-x; y++){
			if(a[y] > a[y+1]){
				temp = a[y];
				a[y] = a[y+1];
				a[y+1] = temp;
			}
		}
	
	}
	
	printf("排序后：{ ");
	for(x = 0; x < 5; x++){
		printf("%d ",a[x]);
	}
	printf("}");

	return 0;
}