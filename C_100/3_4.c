// 练习3-4 统计字符
// 输入为10个字符。最后一个回车表示输入结束，不算在内。
#include <stdio.h>
int main(void){
	char str [10];
	int i;
	int letter = 0;
	int blank = 0;
	int digit = 0;
	int other = 0;

	for(i = 0; i < 10; i++){
		scanf("%c",&str[i]);
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z') letter++;
		else if(str[i] == ' ' || str[i] == '\n') blank++;
		else if(str[i] >= '0' && str[i] <= '9') digit++;
		else other++;
	} 
	
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
	return 0;
}