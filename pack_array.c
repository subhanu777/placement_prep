#include<stdio.h>

int main()
{
	int n,i,j,k,a[100],b[100];
	printf("\nEnter the no of elements you want to enter:");
	scanf("%d",&n);
	printf("\nEnter the lements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0,j=i+1,k=j;i<n && a[i]==a[j] ;i++,j++,k++)
	{
			a[k]=a[k+1];
			n--;
			j--;
	}
	printf("\nThe final array is:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
		
		
			
		
