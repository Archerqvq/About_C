/*
* 一个物体从100米的高空自由落下。编写程序，求它在前3秒内下落的垂直距离。设重力加速度为10米/秒 
* 自由落体公式：s = 1/2gt^2
*/
#include <stdio.h>
#include <math.h> // 计算平方用到的库文件（头文件），里面含有计算平方的函数
int main(void){
	int g = 10;
	int t = 3;
	printf("height = %.2lf\n",(double)(g/2*(int)pow(t,2))); // 计算出结果后，强制类型转换
	return 0;
}