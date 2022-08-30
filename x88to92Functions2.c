#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned long int factorial(int number) {
    // note maximum input lang nito ay 25
    // due to limit of unsigned long integer
    unsigned long int factorial = 1;
    for (int i = number; i > 1; i--) {
        factorial = factorial * i;
    }
    return factorial;
}

void displayFactorialResult(int input) {
    printf("\ndisplayFactorialResult():\n");

    printf("factorial input: %d\n", input);

    unsigned long int result = factorial(input);

    printf("factorial result: %ld\n", result);
}

void f1() {
    displayFactorialResult(5);
    displayFactorialResult(10);
    displayFactorialResult(15);
    displayFactorialResult(20);
    displayFactorialResult(25);
}

void f2() {
    // factorial inside a factorial
    // maximum lang nito ay 3
    printf("%ld\n", factorial(factorial(3)));
}

void f3(int number) {
    // display looping inside factorial
    unsigned long int factorial = 1;
    for (int i = number; i > 1; i--) {
        factorial = factorial * i;
        usleep(500000);
        printf("loop %d  ==  %ld\n", i, factorial);
    }

}


int main() {
    f1();
    f2();
    f3(10);
    return 0;
}

/*

For int %d
For long int %ld
For long long int %lld
For unsigned long long int %llu
*/