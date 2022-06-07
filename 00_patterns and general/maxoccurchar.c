/*
#include<stdio.h>
#include<string.h>
int main()
{
	char result,a[100];
	int i,l,max=-1;
	int freq[256]={0};
	
	printf("\nEnter the string:");
	gets(a);
	
	l=strlen(a);
	
	for(i=0;i<l;i++){
		freq[a[i]]=freq[a[i]]+1;
	}
	for(i=0;i<l;i++){
		if(max<freq[a[i]]){
			max=freq[a[i]];
			result=a[i];
		}
	}
	printf("\nMax occuring character is :%c\n",result);
}
*/

#include<stdio.h>
#include<string.h>
int main()
{
        char result,a[100];
        int i,l,max=-1;
        int freq[256]={0};

        printf("\nEnter the string:");
        gets(a);

        l=strlen(a);

        for(i=0;i<l;i++){
                freq[a[i]]=freq[a[i]]+1;
        }
        for(i=0;i<256;i++){
                if(freq[max]<freq[i]){
                        max=i;
                        
                }
        }
        printf("\nMax occuring character is :%c \nno of times it occured is:%d",max,freq[max]);
}

