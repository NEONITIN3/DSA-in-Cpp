

#include<stdio.h>
#include<conio.h>
int swap(int *i,int *j)
{
	int t;
	t=*i;
	*i=*j;
	*j=t;
}
int main()
{
	int a,b,p;
	printf("befor swap a=,b=\n");
	scanf("%d%d",&a,&b);
    swap(&a,&b);//call the function with address pass kare kle
	printf("after swap\n a=: %d\n,b=: %d",a,b);
	getch();
	
	
}
