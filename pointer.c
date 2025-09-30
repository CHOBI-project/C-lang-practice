//
// Created by 村上 康佑 on 2025/09/30.
//

#include "pointer.h"
#include <stdio.h>
#include <string.h>

void outputPointer() {
    int x = 42;
    int *p = &x; // xのアドレスをpに格納

    //整数値が出力される
    printf("xの値(x = p): %dと%d\n", x, *p);

    //アドレスが出力される
    printf("xのアドレス値(&x = *p): %pと%p\n", &x, p);
}

void addTen(int *num) {
    *num += 10;
}

void arrayPointer() {
    int array[] = {1,2,3,4,5};
    int sum = 0;
    int *p = array; //*p = &array[0]でもいい
    int len = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < len; i++) {
        printf("アドレス: %p, 値: %d\n", p + i, *(p + i));
        sum += *(p + i);
    }
    printf("sum = %d\n", sum);
}

void showTextOne(char text[]) {
    char *p = text;
    while (*p != '\0') {
        printf("%c\n", *p);
        p++;
    }

    for (int i = 0; i < strlen(text); i++) {
        printf("%c\n", text[i]);
    }
}