#include <stdio.h>
#include <conio.h>
#include <ctype.h>
main()
{
	char a;
	printf("enter the char=");
	a=getch();//scanf("%c",&a)
	if(islower(a))
	  putchar(toupper(a));
return 0;	  
}
