#include <stdio.h>
  
int main()
{
    int rows, cols, i, j,k=0;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
		if(i==j || ((i+j)%(cols+1)==0))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
    }
}
