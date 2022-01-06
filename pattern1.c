#include <stdio.h>

int main()
{
    int d,n, i, j;

    /* Input rows and columns from user */
    printf("Enter value of n: ");
    scanf("%d", &n);
	d=n*2-1;
   // printf("Enter number of columns: ");
   // scanf("%d", &cols);

    for(i=1; i<=d; i++)
    {
        for(j=1; j<=d; j++)
      	{
            if(i==1 || i==d || j==1 || j==d)
            {
                printf("%d",n);
            }
            else if(i>=2 || i<=d-1 ||j>=2 ||j<=d-1)
            {
                printf("3");
            }
	    else
	    {	
		printf(" ");
	    }
        }

        printf("\n");
    }

    return 0;
}



/*
#include<stdio.h>
int main()
{
	int i,j,n,k=2,d;
	printf("Enter the value of n:");
	scanf("%d",&n);
	d=(n*2-1);
	for(i=1;i<=(n*2-1);i++){
		for(j=1;j<=(n*2-1);j++){
			if(i==0 || i==d || j==0 || j==d)
				printf("%d",n);
			else
				printf(" ");
			}
		printf("\n");
		}
}*/
