/*
You are required to enter a word that consists of X and Y that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if .
2X=Y
Determine if the entered word is similar to word zoo.

For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

Input format

First line: A word that starts with several Zs and continues by several Os.
Note: The maximum length of this word must be .
Output format

Print Yes if the input word can be considered as the string zoo otherwise, print No.
SAMPLE INPUT
zzzoooooo
SAMPLE OUTPUT
Yes */

#include <iostream>



using namespace std;



int main() {

int x=0,y=0,i=0;

char arr[20];// size of array

cin>> arr; //array input





while(arr[i]!= NULL){ //loop run an til arr[i] not equal to NULL

 if(arr[i]=='z')

 {

  x++; // increment of x value

 }

 else

 {

     y++;// increment of y value

 }

 i++;// increment of i value

}

if(y==2*x){ //given condition check

 cout<< "Yes" ;

}

else{

 cout<< "No" ;

}



return 0;

}


