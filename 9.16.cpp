# define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int a;
	printf("请输入整数：");

		scanf("%d", &a);

		if (a == 0)
		{
			printf("a是零");
		}
		else if (a % 2 == 0)
		{
			printf("a是偶数");
		}
	else { printf("a是奇数"); }
	return 0;
}
