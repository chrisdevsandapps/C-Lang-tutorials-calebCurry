

#include <stdio.h>
#include <unistd.h>
#include <string.h>


int isEqual(int x, int y) {
    if (x == y) {
        return 1;
    } else {
        return 0;
    }
}
void printIsEqual(int x, int y) {
    int value = isEqual(x, y);
    if(value == 1) {
        printf("is equal\n");
    } else {
        printf("is not equal\n");
    }

}


void f1() {
    printf("\n\nf1():\n");
    printIsEqual(11, 12);

}
void f2() {
    printf("\n\nf2():\n");
    printIsEqual(11, 11);
}


int main() {
    f1();

    f2();

    return 0;
}

/*
function should do one thing
*/