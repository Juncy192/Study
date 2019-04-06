#include<stdio.h>
#define NUMBER 5

int cube(int num);

int main(void)
{
	int a = 0;
	printf("何かけますか？:");
	scanf("%d", &a);
	printf("%dの%d乗は%dです。\n",NUMBER,a,cube(a));
	return (0);
}

int cube(int num)
{
	 int pow = 1;

	for(int i = 0; i < num; i++){

		pow = pow * NUMBER;

	}

	return pow;
}
