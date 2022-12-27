#include<stdio.h>

//simple methode se
char* swap(char *p)
{
    int l,i;
    char t;
    for(l=0;*(p+l)!='\0';l++)
        for(i=0;i<l/2;i++)
    {
        t=*(p+i); //string ka pahala char. i se aage badata jayega;
        *(p+i)=*(p+l-1-i) ;// pahle wale ko last se swap kar kran ahai (p+l_1) etna last ko address karga
     *(p+l-1-i)=t;
    }
    return (p);
}
char* swap(char*);//declaration of function
int main()
{
 char p[]="Neonitin";
 char *j;
 j=&p;
 j=swap(j);
    //fun ko call kar lete hai
   printf("after swap char  string is: %s",j);
return 0;
}
