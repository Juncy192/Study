
// 入力された値が10の倍数かどうか

#include<stdio.h>

void main()
{
	int a = 0;

	printf("整数を入力してください\n");
	scanf("%d",&a);

	// 変数aを10で割った時の余りが0の時
	if(a % 10 == 0)
	{
		printf("その数は10の倍数です\n");
	}else
	{
		printf("その数は10の倍数ではありません\n");
	}
}
