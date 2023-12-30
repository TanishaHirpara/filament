#include<stdio.h>
#include<string.h>

int main()
{
	char name[100];
	int i,n,count=0;
	
	printf("Enter the character =");
	gets(name);
	n=strlen(name);
	
	 for(i=0;i<n;i++)
	{
		if(name[i]==name[n-i-1])
		count++;
	}
	if(count==i)
	{
		printf("String is palindrome " );
	}
	else
	{
		printf("String is not palindrome " );
	}
}