#include <stdio.h>
int main(void){
	// 变量声明
	int n = 10;
	int a[n];
	int temp;
	int count = 0; // 判断输入数值量是否超出10个
	// 数据输入
	printf("随机输入10个数字：");
	for(int x = 0; x < n; x++){
		scanf("%d",&a[x]);
		count++;
	}
	// 算法实现
	if(count != n-1){
		for(int x = 0; x < n - 1; x++){
			for(int y =0; y < n - 1 - x; y++){
				if(a[y] > a[y + 1]){
					temp = a[y];
					a[y] = a[y + 1];
					a[y + 1] = temp;
				}
			}
		}
	// 数据输出
		printf("排序后：");
			for(int x = 0; x < n; x++){
				printf("%d ",a[x]);
			}
	}
	else{
		printf("ERROR!!");
	}
	return 0;
}