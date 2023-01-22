#include<stdio.h>
int main()
{
    int  s1;
    char  *s2;
    float *s3;
    printf("%d\n%d\n%d",sizeof(s1),sizeof(s2),sizeof(s3));

    /* char hamesa 1byte ki memory store krta hai; 1byte=8bit
    int 2 bytes ki
    float 4 bytes ki
    aur pointer hamesa 2 bytes memory leta hai */
    return 0;
}
