#include<stdio.h>
#include<string.h>
int main()
{
 
 int i,j;
 char S[100];
 scanf("%s",S);
 for(i=0,j=(strlen(S)-1) ; i<strlen(S) ; i++,j--)
  {
  if(S[i]==S[j])
       continue;
  else{     
    printf("NO");
    break; 
  }
if(i==strlen(S))

  printf("YES");
}
return 0;

}
