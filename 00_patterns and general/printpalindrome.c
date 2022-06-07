#include<stdio.h>

int reverse(int n)
{
	int rev=0,remainder;
	while(n!=0)
	{
		remainder=n%10;
		rev=rev*10+remainder;
		n=n/10;
	}
	return rev;
}
int generate_palindrome(int n)
{
	int no=n;
	if(no==reverse(no))
	{
		printf("The palindrome no is: %d",no);
		return 1;
	}
	else
		return generate_palindrome(no+reverse(no));
}
int main()
{
	int n;
	printf("\nEnter the no you want to genearte palindrome:");
	scanf("%d",&n);
	generate_palindrome(n);
}
