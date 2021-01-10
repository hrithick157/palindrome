#include<stdio.h>
#include<conio.h>
void main()
{
	int n,temp,reminder,reverse=0;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	
	while(n!=0)
	{
		reminder=n%10;
		reverse=reverse*10+reminder;
		n=n/10;
	}
	if(temp==reverse)
	{
		printf("It is a palindrome number");	
	}
	else
	{
		printf("It is not a palindrome number");
	}
	getch();
}
