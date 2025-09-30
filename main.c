#include <stdio.h>
#include "functions.h"
#include "pointer.h"

int main(void) {
    output();
    primitive();
    ifSentence(10, "cat");
    switchSentence(3);
    forSentence(5);
    whileSentence(3);

    outputPointer();

    int num = 5;
    printf("%d\n", num);
    addTen(&num);
    printf("%d\n", num);

    arrayPointer();
    showTextOne("hello");

    return 0;
}