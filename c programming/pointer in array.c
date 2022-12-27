#include<stdio.h>
int main()
{
int a[100],*p,i,n;
p=&a;
printf("enter size of array");
scanf("%d",&n);
//ab ham pointer ki madat se vlue inter karenge  yaha P a k adress access kar rah ahai to *p se yani ki uski value access ho jayegi
//in simple scanf to jante ho aaj pointer ki madat se karenge
for(i=0;i<n;i++)
{
    scanf("%d",&*(p+i)); //normal me &a[i] karte hai a likhna ya *p dono baarab hoga kyoki p a ka address liya hai;
}
for(i=0;i<n;i++)
    printf(" %d",*(p+i));
return 0;
}
