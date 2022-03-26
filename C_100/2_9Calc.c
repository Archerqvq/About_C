/*
*  本题要求编写程序，计算2个正整数的和、差、积、商并输出。题目保证输入和输出全部在整型范围内。
*/
#include <stdio.h>
int main(void){
	int x;		   
	int y;		    //声明两个整型变量，调用scanf()函数从键盘接收随意两个数字
	scanf("%d %d",&x,&y); 
	if(y==0){
		printf("0不可用作除数，请重试输入\n");
	}else{
		printf("%d + %d = %d\n", x, y, x + y);
		printf("%d - %d = %d\n", x, y, x - y);
		printf("%d * %d = %d\n", x, y, x * y);
		printf("%d / %d = %d\n", x, y, x / y);
	}
	getchar();
	return 0;
}