#include <stdio.h>


struct point{
double x;
double y;
} p1 = { 2.5, 4.0}; /// yah ek tarah se global values dena hai hai aur obj banan haui



int main()
{
    struct point;
    printf("%f",p1.x);
    return 0;
}
