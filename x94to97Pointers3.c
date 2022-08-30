

#include <stdio.h>
#include <unistd.h>

void spacer() { printf("\n");}

void add1AndPrintArray(int arr[], int size) {
    printf("printArray():\n");
    for (int i = 0; i < size; i++) {
        arr[i]++;
        printf("%d  ", arr[i]);
    }
    spacer();
}

void f1() {

int array1[] = {3, 6, 9, 12, 15, 18};

for (int i = 0; i < 6; i++) {
    printf("%d  ", array1[i]);
}

spacer();

add1AndPrintArray(array1, 6);

spacer();

for (int i = 0; i < 6; i++) {
    printf("%d  ", array1[i]);
}

spacer();


}

int main() {
    f1();
    return 0;
}

