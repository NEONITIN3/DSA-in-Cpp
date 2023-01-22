#include <stdio.h>
#include <string.h>
#include <math.h>
void displayPathtoPrincess(int n, char grid[101][101]){
    int found=0;
    if(grid[0][0]=='p')            //top-left position
        { found=1;
        }
    else if(grid[0][n-1]=='p'){    //top-right position
        found=2;
       }
    else if(grid[n-1][0]=='p')     //bottom-left position
        { found=3;
        }
    else                           //bottom-right position
        { found=4;
        }
    if(found==1)
        { for(int i=n/2; i>0; i--)
          printf("UP\n");
          for(int j=n/2; j>0; j--)
          printf("LEFT\n");
         
        }
    else if(found==2)
        { for(int i=n/2; i>0; i--)
          printf("UP\n");
          for(int j=n/2; j>0; j--)
          printf("RIGHT\n");
         
        }
    else if(found==3)
        { for(int i=n/2; i>0; i--)
          printf("DOWN\n");
          for(int j=n/2; j>0; j--)
          printf("LEFT\n");
         
        }
    else if(found==4)
        { for(int i=n/2; i>0; i--)
          printf("DOWN\n");
          for(int j=n/2; j>0; j--)
          printf("RIGHT\n");
         
        }
   
}
int main(void) {

    int m;                    //grid size
    scanf("%d", &m);
    char grid[101][101]={};   //grid
    char line[101];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}
