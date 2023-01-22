#include <stdio.h>

struct point* ptr = &p1;
struct point{
double x;
double y;
} p1 = {4, p1.x};

int main()
{
    struct point;
    printf("%f",p1->y);

    ///o/p    4 aayega
  //  printf("%d",p1.y);
    return 0;
}
