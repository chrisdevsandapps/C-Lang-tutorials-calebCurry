

#include <stdio.h>
#include <unistd.h>

void spacer() { printf("\n");}

typedef struct {
    int length;
    int width;
} Rectangle;

typedef struct {
    int x;
    int y;
} Position;


// struct of the 2 struct above
typedef struct {
    char owner[30];
    Rectangle rec;
    Position pos;
} BldgPlan;

void f1() {
    BldgPlan bldg1 = {
        "myHouse", 
        {30, 80},
        {5836, 8939}
        };
    printf("The house at coordinate %d %d (size %d %d) is owned by %s\n",
        bldg1.pos.x, bldg1.pos.y,
        bldg1.rec.length, bldg1.rec.width,
        "Jen"
    );
}


void f2() {
    // an array of structs

    Position path[] = {{1,2}, {3,4}, {5,6}};
    int size = 3;
    for (int i = 0; i < size; i++) {
        printf("{%d, %d}\n", path[i].x, path[i].y);
    }
}

void f3() {
    // todo struct pointer
    // timeline:
    // https://youtu.be/-Vy4qrl675E?t=161
}

int main() {
    f1();
    f2();
    return 0;
}