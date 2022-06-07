/*
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
	int n,i,j,index=0;
	char a[100];
	//printf("Enter the no of character you want to enter:");
        bool status=false;
	printf("Enter the charecter stream:");
	//for(i=0;i<n;i++)
	//	scanf("%c",&a[i]);
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
                printf("\n%c",a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)
				continue;
			else 
			{
				if(a[i]==a[j])
				{
					status=false;
					break;
				}
				else
				{
					status=true;
					index=i;
					goto p;
					break;
				}
			}
		}
	}
	p:if(status)
		printf("\n=>%c\n",a[index]);
	else
		printf("No char found _ \n");			
			
}
*/

#include<stdio.h>
#include<string.h>
int main()
{
        char result,a[100];
        int i,l,max=-1,j=1;
        int freq[256]={0};

        printf("\nEnter the string:");
        gets(a);

        l=strlen(a);

        for(i=0;i<l;i++){
                freq[a[i]]=freq[a[i]]+1;
        }
        for(i=0;i<256;i++){
                if(freq[i]==1 && j==1){
                        result=i;
			j=7;
                }
        }
	printf("First nonrepeating char = %c\n",result);
}

