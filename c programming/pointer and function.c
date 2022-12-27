#include<stdio.h>
/* to aaj ham swap function banayenge*/
void swap (int,int);//ye hai function declaration;
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d\n%d",&a,&b);
//function call by refrence or address
swap(&a,&b);/*ye swap function main() fun se bahar kahi bana hoga to
waha ham value SWAP KARENGE AUR YAHA BHI VALUE CHANGE HO JAYEGA ESI LIYE HAM VARIABLE KA ADDRESS PASS KIYE HAI
TAKI WO CHANGE MAIN M BHI HO JAYE agar only value pass karte to kewal swap() m hi values swap hoti */
printf("after swap the values a , b= :%d\n%d",a,b);
return 0;
}
//function jo banye hai usko define karenge

swap(int *a,int *b) //* es liye lagaye hai taki compiler jaan paye ki ye koi aam int variable haiye address hold karne wale variable hai;
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    //function type void hai to matalab ye function kuchh return nahi karega
    /*aur ek function hamesa ek hi value return kar sakta hai ea lie  agar
    ham soche ki swap m change kara kar dono value return karwa le to nahi ho sakta
    kyoki koi bhi fun only one value return karta hai
    */

}

