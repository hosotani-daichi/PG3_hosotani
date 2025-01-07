#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

// コールバック関数
void DispResult(int* s, int* kye) {
    int dice = rand() % 6 + 1; // 1から6までのランダムな数字を生成

    if ((dice % 2 == 0 && *kye == 0) || (dice % 2 != 0 && *kye == 1)) {
        if (dice % 2 == 0)
            printf("%dで丁(偶数)でした。当たり\n", dice);
        else
            printf("%dで半(奇数)でした。当たり\n", dice);
    }
    else {
        if (dice % 2 == 0)
            printf("%dで丁(偶数)でした。はずれ\n", dice);
        else
            printf("%dで半(奇数)でした。はずれ\n", dice);
    }
}

void setTimeout(std::function<void(int*, int*)> p, int second, int kye) {
    // 秒数をカウントダウン
    for (int i = 0; i < second; i++) {
        Sleep(1000);
        printf("%d...\n", second - i);
    }

    // コールバック関数を呼び出す
    p(&second, &kye);
}

int main() {
    int kye;

    srand(static_cast<unsigned int>(time(NULL))); // 乱数のシードを設定
    printf("丁(偶数)なら0、半(奇数)なら1を打つ\n");
    scanf_s("%d", &kye);

    if (kye == 0) {
        puts("あなたは丁(偶数)を選びました");
    }
    else {
        puts("あなたは半(奇数)を選びました");
    }

    std::function<void(int*, int*)> p = [](int* s, int* kye) { DispResult(s, kye); };
    setTimeout(p, 3, kye);

    return 0;
}
