#include<stdio.h>
int main()
 {

     int s[4],*j,i;
     j=&s; //j=&s[0]
     for(i=0;i<4;i++)
     {


    // scanf("%d",&*(j+i)); ye bhi kaam karta hai
     scanf("%d",(j+i));

      }
      for(i=0;i<4;i++)
        printf(" %d",*(j+i));
      return 0;
 }
