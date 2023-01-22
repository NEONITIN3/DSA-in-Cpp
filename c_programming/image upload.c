#include <stdio.h>

int main(){
	int n,l,i,j,a[100][100];

	scanf("%d",&l);
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
	   for(j=0;j<2;j++)
	   {
		  scanf("%d",&a[i][j]);
	   }
    }

	for (i=0;i<n;i++)
	{
	   for(j=0;j<2;j++)
	   {
		   if(a[i][j]==180)
		   {
			   printf("ACCEPTED\n");
		   }
		   else if(a[i][j]>180)
		   {
			   printf("CROP IT\n");
		   }
	       else
		   {
			   printf("UPLOAD ANOTHER\n");
		   }

	   }
	}





	return 0;


	          			// Reading input from STDIN
	//printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

