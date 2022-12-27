#include <stdio.h>
#include<conio.h>
int main()

{
int N,A[1000],i;
scanf("%d",&N);
for(i=0; i<N; i++)
{
scanf("%d",&A[i]);
}
for (i=N-1; i>=0; i--)
{
printf("%d\n",A[i]);
}

getch();
return 0;

}

