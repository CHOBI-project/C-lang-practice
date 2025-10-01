#include <stdio.h>
#include "functions.h"
#include "person.h"
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

    Person p = {"taro", 10};
    showInfo(p);

    memoryOperation();

    return 0;
}