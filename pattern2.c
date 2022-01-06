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
            /* 
             * Print 1 if its first or last row
             * Print 1 if its first or last column
             */
           // if(i==1 || i==rows || j==1 || j==cols)
           // {
                printf("%d",!(k%2));
		++k;
           // }
           // else
           // {
           //     printf("0");
          //  }
        }

        printf("\n");
    }

    return 0;
}
