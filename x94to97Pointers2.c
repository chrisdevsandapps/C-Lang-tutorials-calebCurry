

#include <stdio.h>
#include <unistd.h>

// passing by value versus passing by pointer

void spacer() { printf("\n");}

int doubleTheValue(int *input) {
     return *input = *input * 2;
}

void f1() {
    printf("\nf1():\n");

    int var111 = 888;
    printf("int var111 = 888;\n");
    printf("current value of var111: %d\n", var111);

    spacer();
    usleep(1000000);

    doubleTheValue(&var111);
    printf("doubleTheValue(&var111);\n");
    printf("current value of var111: %d\n", var111);

    spacer();
    usleep(1000000);

    int *pointer1 = &var111;
    printf("int *pointer1 = &var111;\n");
    printf("value of &var111: %p\n", &var111);
    printf("value of *pointer1: %d\n", *pointer1);
    printf("value of pointer1: %p\n", pointer1);

    spacer();
    usleep(1000000);

    var111 = 999;
    printf("var111 = 999;\n");
    printf("value of &var111: %p\n", &var111);
    printf("value of *pointer1: %d\n", *pointer1);
    printf("value of pointer1: %p\n", pointer1);
}



void f2() {
    printf("\nf2():\n");


}

void f3() {

}

int main() {

    f1();
    // f2();
    // f3();

    return 0;
}