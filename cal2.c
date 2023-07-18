#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char input[100];
    printf("16進数を入力してください: ");
    scanf("%s", input);

    // 16進数⇒10進数に変換
    long num = strtol(input, NULL, 16);

    // 1.1倍を計算
    double ans = num * 1.1;

    // 計算結果を10進数から16進数に変換
    unsigned int result = (unsigned int)ans;

    // 結果を16進数で表示
    printf("16進数%sの1.1倍は%x\n", input, result);

    return 0;
}
