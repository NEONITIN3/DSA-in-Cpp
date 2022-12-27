#include<stdio.h>
/*
"r" this mode read the existing file not create the file when its not avalable


"r+"read writte mode and create file if file not exist and over write the data


"w" only write mode also create the file is not exist and if file exist then it delete the previous data

"w+" same as w mode but here read also possible

"a+" sabse achha hai yah read write dono create if file not exist . append the new text at end of the file.
*/
int main()
{

    FILE p; //FILE yah ek data type hai like int and char always in capital letter;
    fopen("myfirstfile.txt","r+");
    return 0;
}

