
#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=cols-1; j++)
        {
            printf("%d", i);
        }

        for(j=i; j<=cols; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
