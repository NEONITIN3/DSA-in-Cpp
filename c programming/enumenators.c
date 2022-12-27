//its also a non premative data type like pionter and union;
#include<stdio.h>
//enumenators ko enum key word se assign lkarte ai hasi
enum iseven{
false,true
//index 0 par false hai endex 1 par trues hai
//esme avlue dalane k baad semicolon nahi lagta hai
};
enum iseven num(int x)
{

    if(x%2==0)
        return (true);
    else
        return (false);
}
void main()
{
    int x,c;
    scanf("%d",&x);
    c=num(x);
    printf("number is even its : %d",c);
}
