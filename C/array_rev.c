#include<stdio.h>
#define SIZE 7

void Reverse(int v[], int a);

int main(void){

	int kazu[SIZE] = {0};
	int i = 0;

	printf("整数を入力してください\n");

	for(i = 0; i < SIZE; i++){
		printf("x[%d]:", i);
		scanf("%d", &kazu[i]);

	}

	// 配列は[]を記載しないとアドレスを渡す。
	Reverse(kazu, SIZE);

	printf("反転しました。\n");

	for(i = 0; i < SIZE; i++){
		printf("x[%d]:%d\n", i,kazu[i]);
	}


	return 0;
}


void Reverse(int v[], int a){

	// 反転するプログラム
	// 入れ替える回数は「全体の数 / 2」
	int temp;
	for(int i = 0; i < a / 2; i++){
		temp = v[i];
		v[i] = v[a - i - 1];
		v[a - i - 1] = temp;
	}

}
