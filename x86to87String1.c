

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void func111() {
    // xxx
    printf("\n\nfunc111():\n");
    char myString[] = "this is a string";
    printf("%s\n", myString);
}
void func222() {
    // xxx
    printf("\n\nfunc222():\n");
    printf("what is your favorite food?\t");
    char favFood[30];
    scanf("%29s", favFood);
    printf("%s\n", favFood);

    // to find length:
    int count = 0;
    while (favFood[count] != '\0') {
        count++;
    }
    printf("length: %d\n", count);
}
void func333() {
    // using strlen from <string.h>
    printf("\n\nfunc333():\n");
    printf("what is your favorite drinks?\t");
    char favDrinks[30];
    scanf("%29s", favDrinks);
    printf("%s\n", favDrinks);

    // to find length:
    int count = strlen(favDrinks);
    printf("length: %d\n", count);
}

int main() {

    func111();
    func222();
    func333();
    return 0;
}