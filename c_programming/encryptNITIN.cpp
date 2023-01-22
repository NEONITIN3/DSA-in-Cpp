#include <stdio.h>
#include<conio.h>
#include <stdlib.h>


int main()
{
   int i, x;
   char str[]="NITIN";
   /* random int between 0 and 20 generat karna hai so RAND() which is <stdlib.h> 
   
   */
   int r = rand() % 20;
   printf("for this encrpted case, random key is=%d\n",r);
   
   //sabhi alphabets ko random key ki value se shift karne k liye loop chalana padega
   //aur har baar key ki value change hoti rahegi BTW 0-20;
   for(i = 0; (str[i] != '\0'); i++)
        str[i]= str[i] + r; 
        puts("NITIN ,ENCRYPTED STRING IS BELOW \n");//puts and printf equal
        printf("\n HERE YOUR ENCRYPTED STRING : %s", str);
   return 0;
}
