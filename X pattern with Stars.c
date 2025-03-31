#include <stdio.h>

int main() {
    int rows , columns ;
    
    printf(" - Enter number of columns: ");
    scanf("%d", & columns);
    printf(" - Number of columns %d : \n", columns);
    printf(" - Enter number of rows: ");
    scanf("%d", & rows);
    printf(" - Number of rows %d : \n", rows);

    int i, j;

    for (i = 1; i <= rows; i++) 
	{
        for (j = 1; j <= columns; j++) 
		{	
            if (j == i || (columns-i+1) == j ) 
			{
                printf(" ");
            } 
			else 
			{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
