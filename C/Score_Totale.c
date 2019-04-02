
// 6人の国語、数学、合計、平均の点数を求める。

#include<stdio.h>
#define SIZE (6)

int main(void)
{
	int i,j;
	int tensu[SIZE][2] = {0};
	int sum[SIZE] = {0};
	int sum1[2] = {0};

	printf("6人の点数を入力してください。\n");

	for(i = 0; i < SIZE; i++)
	{
		printf("%d番目・・・国語:",i + 1);
		scanf("%d", &tensu[i][0]);
		printf(" 　　　　　数学:");
		scanf("%d", &tensu[i][1]);

		// 国語と数学の合計点数
		sum[i] = tensu[i][0] + tensu[i][1];
		// 国語全体の合計点数
		sum1[0] += tensu[i][0];
		// 数学全体の合計点数
		sum1[1] += tensu[i][1];
	}

	printf("-----------------------------\n");
	printf(" 番号　国語　数学　合計　平均\n");
	printf("-----------------------------\n");

	for(i = 0; i < SIZE; i++)
	{
		// 点数の表示、doubleにキャストしている
		printf("%5d%6d%6d%6d%6.1f\n", i + 1, tensu[i][0], tensu[i][1],sum[i],(double)sum[i] / 2);
	}

	printf("-----------------------------\n");
	printf(" 合計%6d%6d%6d\n", sum1[0], sum1[1],sum1[0]+sum1[1]);
	printf(" 平均%6.1f%6.1f%6.1f\n", (double)sum1[0]/SIZE,(double)sum1[1]/SIZE,((double)sum1[0]+(double)sum1[1]) / SIZE);
	printf("-----------------------------\n");

	return (0);
}
