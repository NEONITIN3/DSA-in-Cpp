
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int n,i,a;
scanf("%d",&n); //input szof aay
int *arr = (int*)malloc(n * sizeof(int)); //inter the array 
for (i=0;i<n;i++){
scanf("%d",&arr[i]);//asighn the value of arrray
}
for(i=n-1;i>=0;i--){//reverse logic
printf("%d ",(arr[i]));
}
}
