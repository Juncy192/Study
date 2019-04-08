
 // 1~5までの総和を求める

#include<stdio.h>

// プロトタイプ宣言
int sumup(int a);

int main(void){

	int a = 0;

	printf("整数を入力してください。");
	scanf("%d：", &a);
	printf("1から%dまでの整数の総和は%dです。", a, sumup(a));

	return 0;
}

int sumup(int a){

	int sum = 0;
	for(int i = 1; i <= a; i++){
		sum += i;
	}

	return sum;

}
