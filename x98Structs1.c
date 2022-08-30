

#include <stdio.h>
#include <unistd.h>

void spacer() { printf("\n");}

struct StructRectangle {
    int length;
    int width;
};

void f1() {
    struct StructRectangle rec1 = {5, 10};
    printf("Length: %d  |  Width: %d\n", rec1.length, rec1.width);
}



// alternative:

typedef struct {
    int length;
    int width;
} Rectangle;

void f2() {
    Rectangle rec1 = {88, 99};
    printf("Length: %d  |  Width: %d\n", rec1.length, rec1.width);
}


int main() {
    f1();
    f2();
    return 0;
}