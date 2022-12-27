#include<stdio.h>
struct num{
int a;
char c;
}n1,n2; //global object
int main()
{
    struct num;
    printf("enter the vales of n1 and n2 data vareables=\n");
    scanf("%d %c",&n1.a,&n1.c); //%d aur %c k bic me space rakhna nahi to c ki value nahi lega
       //
     scanf("%d %s",&n2.a,&n2.c);
     printf("n1 values is a= %d and c= %c",n1.a,n1.c);
    // printf("n1 values is a= %d and c= %s  n2 values is a= %d and  c= %s",n1.a,n1.c,n2.a,n2.c);
    /*
    cout<<"enter the values of n1 n2 "endl;
    cin>>n1.a>>n1.c>>n2.a>>n2.c;
    cout<<"n1 ki values"<<n1.a<<n2.a<<"n2 ki values is"<<n2.a<<n2.c;

*/





return 0;

}
