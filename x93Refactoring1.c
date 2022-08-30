

#include <stdio.h>
#include <unistd.h>



void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d  ", arr[i]);
    }
}



void f1() {
    // multidimensional array
    printf("\nf1():\n");

    int const columnsY = 3;
    int const rowsX = 2;
    int myGrades[rowsX][columnsY] = {
        {12, 23, 45},
        {64, 78, 89}
    };

    for (int xxx = 0; xxx < rowsX; xxx++) {
        printArray(myGrades[xxx], columnsY);
        printf("\n");
        usleep(500000);
    }
}





int main() {

    f1();

    return 0;
}