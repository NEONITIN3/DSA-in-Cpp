//its same like structure but only it defferent at storage
//it create memory which largest in all varirable
//int float cha ki size depend karta hai 64bit hai 32 bit doc hai
#include<stdio.h>
union fun{
   int a; //never assin the value during the creation of union or structure; (int a=2)its wrong
//char n;
//float t;

};
struct  fun1{
   int a; //never assin the value during the creation of union or structure; (int a=2)its wrong
char n;
float t;

}p;
int main()
{

    union fun var;
    struct fun1;
    //same as structure we can take and assign value in it
    //lest chech how many memory it takes by union
    printf("size of unio var : %d\n",sizeof(var));
    //out put m aayega 4 and yah jo hai memory size hai float ki 4bytes jo ki int aur char se jyada hai to union bas usi ki liya

    //ab struct wale ko dekho wo sab ko alag alag rakhata hai i mean sab ko memory dega
    printf("size of structure  var : %d",sizeof(p));
    //sabko alag alag memory melega matalb 2+4+1
    return 0;
}
