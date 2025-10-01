#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "functions.h"

#include <stdlib.h>

void output(void) {
    printf("Hello World!!\n");
}

//2. 基本型
void primitive() {
    char c = 'a';
    int i = 10 ;
    float f = 3.14f;
    double d = 2.71828;
    bool flag = true;
    char text[] = "C langrage";

    printf("char: %c\n", c);
    printf("int: %d\n", i);
    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("flag: %d\n", flag);
    printf("text: %s\n", text);

    //書式	対応する型	出力の意味
    //%c	char	1文字を出力する
    //%d	int（符号付き整数）	整数を10進数で出力
    //%u	unsigned int	整数を10進数で出力（負数なし）
    //%f	float, double	小数点付きで出力
    //%lf	double	倍精度小数
    //%s	char *（文字列）	文字列を出力
    //%p	ポインタ	アドレスを出力
    //%zu	size_t 型	メモリサイズなどに使う整数
}

//if文
void ifSentence(int age, char kind[]) {
    if (age >= 20) {
        printf("大人の");
    } else {
        printf("子供の");
    }

    //==演算子を使えないため[strcmp]を使う
    if (strcmp(kind, "cat") == 0) {
        printf("猫です\n");
    } else {
        printf("犬です\n");
    }
}

void switchSentence(int month) {
    switch (month) {
        case 1:
            printf("1月です\n");
            break;
        case 2:
            printf("2月です\n");
            break;
        case 3:
            printf("3月です\n");
            break;
        default:
            printf("1,2,3月以外です\n");
            break;
    }
}

void forSentence(int num) {
    for (int i = 0; i < num; i++) {
        if (i % 2 == 0) {
            printf("for num: %d\n", i);
        }
    }
}

void whileSentence(int max) {
    int num = 0;
    while (num < max) {
        printf("while num: %d\n", num);
        num++;
    }
}

int memoryOperation() {
    int n;
    printf("要素数を入力");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("メモリ確保に失敗");
        return 1;
    }

    // 値を代入
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // 出力
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // 確保したメモリを解放
    free(arr);

    return 0;
}