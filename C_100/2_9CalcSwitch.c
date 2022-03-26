/* switch语句实现输入两个整数，进行四则运算且输出*/
#include <stdio.h>
int main(void){

	int x,y;	// 声明两个整型变量，调用scanf()函数接收键盘输入	
	char sym;	// 声明运算符号，switch()语句对括号内表达式求值，值应是整型(包括char)
	printf("Please input 2 nums and operator:");
	scanf("%d%c%d", &x, &sym, &y);	
	
	switch(sym){
		case '+':
			printf("%d", x + y);
			break;
		case '-':
			printf("%d", x - y);
			break;
		case '*':
			printf("%d", x * y);
			break;
		case '/':
			if(y!=0){
				printf("%d", x / y);
				break;
			}else{
				printf("Divisor cannot be 0.");	
				break;
			}
		default:
			printf("Unknow operatoer");
			break;
	}

	return 0;
}