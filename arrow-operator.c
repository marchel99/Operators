#include <stdio.h>
#include <stdlib.h>

int main(){

        typedef struct {
            int x;
            int y;
        } 
        point;
point p1;
    p1.x=3;
    p1.y=2;

point *p2;
    p2=&p1;
    p2->x=5;
    p2->y=4;
        printf("p1: (%d,%d)\n",p1.x,p1.y);
        printf("p2: (%d,%d)\n", p2->x, p2->y);

    point *p3;
        p3 = malloc(sizeof(point));
        p3->x=5;
        p3->y=10;

printf("p3: (%d,%d)\n", p3->x, p3->y);
    (*p3).x=2;
    (*p3).y=4;

printf("p3: (%d,%d)\n", (*p3).x, (*p3).y);
return 0;
}