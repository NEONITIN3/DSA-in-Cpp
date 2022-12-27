/*  structure is a group of dissimilar data type '
@ define strucuter it means define new data type.

*/
struct date // main k bahar declare kiye hai matalab GLOBAL declaration hai kahi bhi access kar sakte hai;
{
int d,m,y;
}today,d1; //} d1,d2: variable yahi bhi bana kar sakte hai


int main()
{
    //struct  structname variable;
    //uper variable banayenge to wo global ho jayega
    struct date ;//today, d1; //yaha do varibale hai  6 ,6 bytes ki memory le rah ehai
    today.d=10;
   today.m-10;
    today.y=2020;
    //today=d1 kar dene se today ka pura data d1 m chala jayega ;
    d1.d=20;
    d1.m=10;
    d1.y=2020;
    // struct data today={20,2,2020}; declarationn type 2

    printf("Date : %d/%d/%d\n",today.d,today.m,today.y);
    printf("date :%d/%d/%d ",d1.d,d1.m,d1.y);
    return 0;
}
