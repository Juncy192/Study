#include<stdio.h>

// プロトタイプ宣言
int min2(int num1, int num2);

int main(void)
{
	int a,b = 0;

	printf("二つの整数を入力。\n");
	printf("整数:");
	scanf("%d", &a);
	printf("整数:");
	scanf("%d", &b);

	printf("小さいほうの値は%dです\n",min2(a,b));
	return (0);
}

int min2(int x ,int y)
{
	// 三項演算子
	return(x < y)?x : y;
}
