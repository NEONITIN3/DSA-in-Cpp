#include <stdio.h>
#include<conio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
   int i, x;
   char str[100];
   /* random int between 0 and 20 generat karna hai so RAND() which is <stdlib.h> 
   
   */
   int r = rand() % 20;
   /* i am going to encrpted input from user input  */
   printf("for this encrpted case, random key is=%d",r);
   puts("\nPlease enter a string:\t");
   /* gets used insteed of scanf if fixed lenght char scan*/
   gets(str);
   
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + r; 

        printf("\n HERE YOUR ENCRYPTED STRING : %s\n", str);
   return 0;
}
