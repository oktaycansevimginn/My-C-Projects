#include <stdio.h>

int main() {
	
    int rows,columns; 
	int i, j, k;
    int a = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    if(rows > 0 ) // To enter only integers!
	{
		columns = ((rows-1)*2 + columns);
        printf("Number of columns : %d \n\n", columns);

    for (i = rows; i >= 1; --i) 
	{
        
        for (a = 0; a < rows - i; ++a) 
		{
            printf(" ");
        }
        
        for (k = 0; k < 2 * i - 1; ++k) 
		{
            printf("*");
        }
        
        printf("\n");
    }
    }
   else {
	printf("Please enter a valid number!!");
        }

    return 0;
}

