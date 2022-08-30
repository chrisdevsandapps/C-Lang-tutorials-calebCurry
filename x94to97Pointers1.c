

#include <stdio.h>
#include <unistd.h>

void spacer() { printf("\n");}

void f1() {
    printf("\nf1():\n");

    int var111 = 888;
    printf("int var111 = 888;\n");
    printf("current value of var111: %d\n", var111);

    spacer();

    int *pointer1 = &var111;
    printf("int *pointer1 = &var111;\n");
    printf("value of &var111: %p\n", &var111);
    printf("value of *pointer1: %d\n", *pointer1);
    printf("value of pointer1: %p\n", pointer1);

    spacer();

    var111 = 999;
    printf("var111 = 999;\n");
    printf("value of &var111: %p\n", &var111);
    printf("value of *pointer1: %d\n", *pointer1);
    printf("value of pointer1: %p\n", pointer1);
}



void f2() {
    printf("\nf2():\n");

    int var111 = 888;
    printf("int var111 = 888;\n");
    printf("current value of var111: %d\n", var111);

    spacer();

    int *pointer1 = &var111;
    printf("int *pointer1 = &var111;\n");
    printf("value of &var111: %p\n", &var111);
    printf("value of *pointer1: %d\n", *pointer1);
    printf("address value of pointer1: %p\n", pointer1);

    spacer();

    *pointer1 = 999;
    printf("*pointer1 = 999;\n");
    printf("value of var111: %d\n", var111);

}

void f3() {
    printf("\nf3():\n");

    int var111 = 888;
    printf("int var111 = 888;\n");
    printf("current value of var111: %d\n", var111);

    spacer();

    int *pointer1 = &var111;
    printf("int *pointer1 = &var111;\n");
    printf("value of &var111: %p\n", &var111);
    printf("value of *pointer1: %d\n", *pointer1);
    printf("address value of pointer1: %p\n", pointer1);

    spacer();

    *pointer1 = 999;
    printf("*pointer1 = 999;\n");
    printf("value of var111: %d\n", var111);

    (*pointer1)++;
    printf("(*pointer1)++;\n");
    printf("value of var111: %d\n", var111);

}


int main() {

    f1();
    // f2();
    // f3();



    printf("\npointerTest():\n");

    int var111 = 100;
    printf("int var111 = 100;\n");
    printf("current value of var111: %d\n", var111);

    spacer();

    int *pointer1 = &var111;
    printf("int *pointer1 = &var111;\n");
    printf("value of &var111: %p\n", &var111);
    printf("value of *pointer1: %d\n", *pointer1);
    printf("value of pointer1: %p\n", pointer1);

    spacer();

    var111 = (*pointer1) + 10;
    printf("var111 = (*pointer1) + 10;\n");
    printf("value of &var111: %p\n", &var111);
    printf("value of *pointer1: %d\n", *pointer1);
    printf("value of pointer1: %p\n", pointer1);


    spacer();

    var111 = (*pointer1) + 10;
    printf("var111 = (*pointer) + 10;\n");
    printf("value of &var111: %p\n", &var111);
    printf("value of *pointer1: %d\n", *pointer1);
    printf("value of pointer1: %p\n", pointer1);



    return 0;
}
