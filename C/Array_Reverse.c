
// 配列の並びを逆順にするプログラム

#include<stdio.h>

int main(void)
{
	int a[5] = {11,253,1,35,15};
	int b[5] = {0};
	int i;

	printf("    a    b\n-----------\n");

	for(i = 0; i < 5; i++)
	{
		// 要素と添字に注意する。
		// 要素数は配列の実体の数
		// 添字は配列の番号
		b[i] = a[4 - i];
	}

	for(i = 0; i < 5; i++)
	{
		printf("%5d  %5d\n",a[i],b[i]);
	}

	return (0);
}
