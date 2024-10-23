#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 偶数か奇数かを判定する
void CheckEvenOdd(int dice, void (*callback)(int)) {
	// 関数ポインタでコールバックを呼び出す
	callback(dice);
}

//　結果を表示するためのもの
void ResultCallback(int dice) {
	if (dice % 2 == 0) {
		printf("サイコロの目は %d で偶数\n", dice);
	}
	else {
		printf("サイコロの目は %d で奇数\n", dice);
	}
}

void WaitForSeconds(int seconds) {
	// 現在のプロセスの時間を取得
	clock_t Starttime = clock();
	// 待機する時間
	clock_t Waittime = seconds * CLOCKS_PER_SEC;

	// 現在のクロック数が待機時間を超えるまでループ
	while (clock() - Starttime < Waittime) {
		// 待機
	}
}

int main(void) {

	// サイコロの目
	int dice;
	// ユーザーの入力を保存する変数
	int answer = 0;

	// 乱数を初期化
	srand(time(NULL));

	// 正しい入力があるまで繰り返す
	printf("サイコロの目が奇数であれば1、偶数であれば2を入力して当ててください: ");
	while (scanf_s("%d", &answer) != 1 || (answer != 1 && answer != 2)) {
		printf("無効な入力です。1（奇数）または 2（偶数）を入力してください。\n");

		// 入力バッファをクリア
		// scanfによる不正入力をクリアする
		while (getchar() != '\n');

		// 再度入力を促す
		printf("サイコロの目は奇数(1)か偶数(2)かを当ててください: ");
	}

	// 3秒間待機
	printf("結果を計算中...\n");
	WaitForSeconds(3);

	// サイコロを振る処理
	dice = rand() % 6 + 1;

	// 結果判定
	CheckEvenOdd(dice, ResultCallback);

	// 結果発表
	if ((dice % 2 == 0 && answer == 2) || (dice % 2 != 0 && answer == 1)) {
		printf("正解！\n");
	}
	else {
		printf("不正解！\n");
	}

	return 0;
}