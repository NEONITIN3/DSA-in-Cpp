#include <stdio.h>
#include <conio.h>
//CHWCH GIVEN NUBER IS PALINDROM OR NOT

int main()
{
int n,digit,reverse=0;

scanf("%d",&n); 
while(n!=0)
{
digit=n%10;    //ye digit alag kar dega
reverse=((reverse*10)+digit);         //number generat karta rahega 
n=n/10;           //usme se us digit ko kam kar dega	
}
if(n==reverse)

	printf("%d given number is palindrom");
else
	printf("%d given number is not palindrom");
	
return 0;
}
