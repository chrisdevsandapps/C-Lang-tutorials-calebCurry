

#include <stdio.h>
#include <unistd.h>


void func111() {
    // looping through an array
    printf("\n\nfunc111():\n");

    int myGrades[] = {87, 79, 81, 91, 75};

    for (int i = 0; i < 5; i++) {
        printf("%d -- %d\n", i, myGrades[i]);
        usleep(500000);
    }
}
void func222() {
    // multidimensional array
    printf("\n\nfunc222():\n");

    int const columnsY = 3;
    int const rowsX = 2;
    int myGrades[rowsX][columnsY] = {
        {12, 23, 45},
        {64, 78, 89}
    };

    printf("myGrades[1][2] --%d\n", myGrades[1][2]);

    for (int xxx = 0; xxx < rowsX; xxx++) {
        for (int yyy = 0; yyy < columnsY; yyy++) {
        printf("%d\n", myGrades[xxx][yyy]);
        usleep(500000);
        }
    }
}


int main() {
    printf("hello world!\n");

    func111();
    func222();

    return 0;
}