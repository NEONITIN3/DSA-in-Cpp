#include<stdio.h>
#include<conio.h>
int main()
{
    char s[]="rajmns",t;
    int l,i;
 // printf("%c\n",s[5]);
 l=sizeof(s);

        for(i=1;i<=l/2;i++)
    {
        t=s[0];
        s[0]=s[l-1-i];
        s[l-1-i]=t;

    }
    printf("rajmns\n");
    printf("%s",s);

   //printf("rajmns -->%d\n",l);

    return 0;
}
