/*计算华氏温度150°F对应的摄氏温度。
计算公式：C=5×(F−32)/9，式中：C表示摄氏温度，F表示华氏温度，输出数据要求为整型。
*/
#include <stdio.h>
//
#define TEMP_CONVERT 5*(150-32)/9 
int main(void){
	
	int ceksius = TEMP_CONVERT;
	printf("fahr = 150,ceksius = %d\n",ceksius);
	return 0;
}