#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
		int b = 0;
	int c = 0;
	int d = 0;
	printf("请输入被除数a和 除数b：");
	scanf("%d %d", &a,& b);
	printf("商为%d 余数为%d", a / b, a % b);
	return 0;

}